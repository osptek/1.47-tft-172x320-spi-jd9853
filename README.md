<p align="left"><img alt="OSPTEK" src="./images/logo.png" width="200" /></p>

<h1 align="center">OSPTEK 1.47″ TFT 172×320（JD9853 · SPI）</h1>

<p align="center"><b>TFT 模组 · SPI · JD9853 · 电容触摸</b></p>

<p align="center"><a href="./README_EN.md">English</a> | 简体中文</p>

<p align="center">
  <img alt="Size: 1.47 inch" src="https://img.shields.io/badge/Size-1.47%22-3498DB?style=flat-square" />
  <img alt="Resolution: 172x320" src="https://img.shields.io/badge/Resolution-172%C3%97320-8E44AD?style=flat-square" />
  <img alt="Interface: SPI" src="https://img.shields.io/badge/Interface-SPI-27AE60?style=flat-square" />
  <img alt="Driver: JD9853" src="https://img.shields.io/badge/Driver-JD9853-E7352C?style=flat-square" />
</p>

<p align="center"><img alt="OSPTEK 1.47 寸 172×320 TFT SPI 模组（JD9853）宣传图" src="./images/product.png" width="640" /></p>

## 目录

- [产品简介](#产品简介)
- [规格参数](#规格参数)
- [示例工程](#示例工程)
- [仓库结构](#仓库结构)
- [相关资料](#相关资料)
- [购买链接](#购买链接)
- [技术支持](#技术支持)

---

## 产品简介

OSPTEK **1.47 寸 172×320 TFT** 是一款 **SPI** 接口彩色显示模组，显示驱动为 **JD9853**，触摸驱动为 **CST08C**。适合手持终端、窄条信息显示与小型竖屏 HMI 等场景。

规格标识（仓库名）：`1.47-tft-172x320-spi-jd9853`

当前模组版本：**YDP147BT001-V12**。电气与外形细节以 [`docs/YDP_147_BT_001_V12_3cf3845d60.pdf`](./docs/YDP_147_BT_001_V12_3cf3845d60.pdf) 为准。

## 规格参数

| 项目 | 规格 |
| ---- | ---- |
| 尺寸 | 1.47 英寸 |
| 类型 | TFT / IPS（彩色） |
| 分辨率 | 172×320 |
| 接口 | SPI（4-wire） |
| 驱动 IC | JD9853 |
| 触摸驱动 | CST08C |

> 完整外形尺寸、FPC 定义、供电与时序以产品规格书 / 驱动手册为准。

## 示例工程

| 说明 | 路径 |
| ---- | ---- |
| ESP32-S3 · JD9853 SPI + LVGL9 | [`examples/s3-idf_jd9853-spi_lvgl-v9/`](./examples/s3-idf_jd9853-spi_lvgl-v9/) |
| ESP32-S3 · CST08C 触摸 I2C 测试 | [`examples/display-touch-test/S3-IDF_CST08C-I2C/`](./examples/display-touch-test/S3-IDF_CST08C-I2C/) |

## 仓库结构

```text
1.47-tft-172x320-spi-jd9853/
├── README.md
├── README_EN.md
├── MODULE_VERSION.md
├── LICENSE
├── images/          # README 用图
├── docs/            # 规格书、驱动手册、初始化等
└── examples/        # 示例工程
```

## 相关资料

### 本产品资料

| 资料 | 链接 |
| ---- | ---- |
| 产品规格书（YDP147BT001-V12） | [`docs/YDP_147_BT_001_V12_3cf3845d60.pdf`](./docs/YDP_147_BT_001_V12_3cf3845d60.pdf) |
| 驱动 IC 数据手册（JD9853） | [`docs/JD_9853_DS_Preliminary_V0_00_20230424_161c1b3786.pdf`](./docs/JD_9853_DS_Preliminary_V0_00_20230424_161c1b3786.pdf) |
| 初始化代码 | [`docs/C_JD9853_BOE1.45_WV015GES-NB80_172x320_230831_johnson.c`](./docs/C_JD9853_BOE1.45_WV015GES-NB80_172x320_230831_johnson.c) |
| 触摸驱动手册（CST08C） | [`docs/CST_08_C_V1_0_c0ecd3b568.pdf`](./docs/CST_08_C_V1_0_c0ecd3b568.pdf) |
| 触摸驱动手册（CST816） | [`docs/CST_816_T_v1_3_1_69c246954d.pdf`](./docs/CST_816_T_v1_3_1_69c246954d.pdf) |
| 转接板原理图 | [`docs/YDP147BT001-V12_转接板原理图.png`](./docs/YDP147BT001-V12_%E8%BD%AC%E6%8E%A5%E6%9D%BF%E5%8E%9F%E7%90%86%E5%9B%BE.png) |

### 示例工程

- [ESP32-S3 JD9853 SPI + LVGL9](./examples/s3-idf_jd9853-spi_lvgl-v9/)
- [ESP32-S3 CST08C 触摸 I2C 测试](./examples/display-touch-test/S3-IDF_CST08C-I2C/)

## 购买链接

<p align="center">
  <a href="https://shop110742373.taobao.com/"><img alt="淘宝官方店铺" src="https://img.shields.io/badge/淘宝-官方店铺-FF6A00?style=for-the-badge" /></a>
  &nbsp;&nbsp;
  <a href="https://www.aliexpress.com/store/1105701619"><img alt="速卖通官方店铺" src="https://img.shields.io/badge/速卖通-官方店铺-FF6A00?style=for-the-badge" /></a>
</p>

**国内（淘宝）**

- 店铺：[鱼鹰光电工厂店](https://shop110742373.taobao.com/)

**海外（AliExpress）**

- 店铺：[OSPTEK Official Store](https://www.aliexpress.com/store/1105701619)

## 技术支持

- 技术支持 / 产品咨询：<luyu@osptek.com>
- QQ 技术交流群：**985881096**
- 公司官网：<https://osptek.com/>
- 有任何问题，都可以在本仓库 Issues 中提问

---

<p align="center"><sub>© 2026 OSPTEK 鱼鹰光电 · 本仓库资料采用 CC BY 4.0 许可</sub></p>
