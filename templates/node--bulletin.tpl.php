<?php
  $meta = array();
  $meta[] = $ap_date_cu_medium_date;
  $meta[] = l(render($content['field_bulletin_contact_name']), 'mailto:' . render($content['field_bulletin_contact_email']));
  $meta[] = l('Website', render($content['field_bulletin_website']));

  if (node_access('update', arg(1))) {
    $status = $node->status ? 'Published' : 'Unpublished';
    $meta[] = $status;
  }

  $meta_rendered = join($meta, ' &bull; ');
?>
<div class="clearfix bulletin-view-mode-full">
  <?php print render($content['field_bulletin_image']); ?>
  <?php print render($content['body']); ?>

  <div class="padding-vertical text-minify">
    <?php print $meta_rendered; ?>
  </div>
</div>
