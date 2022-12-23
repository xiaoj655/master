
1.删除linux所在的分区（删除卷，在windows上）
2.用cmd打开diskpart
3.select disk=0
  select partition 1
  assign letter=X #此步把启动盘挂载为X盘
4.用记事本（以管理员身份运行）打开X盘 boot 删除ubuntu的部分（启动引导部分）
大功告成！！
  
