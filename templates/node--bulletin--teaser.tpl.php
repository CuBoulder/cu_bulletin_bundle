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

<div class="node-view-mode-teaser clearfix">
  <?php if(!empty($content['field_bulletin_image'])): ?>
    <?php print render($content['field_bulletin_image']); ?>
  <?php endif; ?>
  <div class="node-view-mode-teaser-content">
    <h2 <?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <div class="article-summary">
      <?php print render($content['body']); ?>

      <div class="bulletin-meta">
        <p class="text-minify">
          <?php print $meta_rendered; ?>
        </p>
      </div>
    </div>
  </div>
</div>
