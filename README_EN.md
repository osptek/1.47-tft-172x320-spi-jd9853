<p align="left"><img alt="OSPTEK" src="./images/logo.png" width="200" /></p>

<h1 align="center">OSPTEK 1.47″ TFT 172×320 (JD9853 · SPI)</h1>

<p align="center"><b>TFT module · SPI · JD9853 · capacitive touch</b></p>

<p align="center"><a href="./README.md">简体中文</a> | English</p>

<p align="center">
  <img alt="Size: 1.47 inch" src="https://img.shields.io/badge/Size-1.47%22-3498DB?style=flat-square" />
  <img alt="Resolution: 172x320" src="https://img.shields.io/badge/Resolution-172%C3%97320-8E44AD?style=flat-square" />
  <img alt="Interface: SPI" src="https://img.shields.io/badge/Interface-SPI-27AE60?style=flat-square" />
  <img alt="Driver: JD9853" src="https://img.shields.io/badge/Driver-JD9853-E7352C?style=flat-square" />
</p>

<p align="center"><img alt="OSPTEK 1.47″ 172×320 TFT SPI module (JD9853) product image" src="./images/product.png" width="640" /></p>

## Contents

- [Overview](#overview)
- [Specifications](#specifications)
- [Sample projects](#sample-projects)
- [Repository layout](#repository-layout)
- [Resources](#resources)
- [Buy](#buy)
- [Support](#support)

---

## Overview

OSPTEK **1.47″ 172×320 TFT** is a **SPI** color display module driven by **JD9853**, with capacitive touch (**CST08C**). Suited to handheld devices, narrow information bars, and compact portrait HMI.

Spec ID (repository name): `1.47-tft-172x320-spi-jd9853`

Current module version: **YDP147BT001-V12**. Electrical and mechanical details follow [`docs/YDP_147_BT_001_V12_3cf3845d60.pdf`](./docs/YDP_147_BT_001_V12_3cf3845d60.pdf).

## Specifications

| Item | Spec |
| ---- | ---- |
| Size | 1.47 inch |
| Type | TFT / IPS (color) |
| Resolution | 172×320 |
| Interface | SPI (4-wire) |
| Driver IC | JD9853 |
| Touch driver | CST08C |

> Full outline, FPC definition, power, and timing follow the product datasheet / driver IC datasheet.

## Sample projects

| Description | Path |
| ---- | ---- |
| ESP32-S3 · JD9853 SPI + LVGL9 | [`examples/s3-idf_jd9853-spi_lvgl-v9/`](./examples/s3-idf_jd9853-spi_lvgl-v9/) |
| ESP32-S3 · CST08C touch I2C test | [`examples/display-touch-test/S3-IDF_CST08C-I2C/`](./examples/display-touch-test/S3-IDF_CST08C-I2C/) |

## Repository layout

```text
1.47-tft-172x320-spi-jd9853/
├── README.md
├── README_EN.md
├── MODULE_VERSION.md
├── LICENSE
├── images/          # README assets
├── docs/            # datasheets, init
└── examples/        # sample projects
```

## Resources

### Product files

| Resource | Link |
| ---- | ---- |
| Product datasheet (YDP147BT001-V12) | [`docs/YDP_147_BT_001_V12_3cf3845d60.pdf`](./docs/YDP_147_BT_001_V12_3cf3845d60.pdf) |
| Driver IC datasheet (JD9853) | [`docs/JD_9853_DS_Preliminary_V0_00_20230424_161c1b3786.pdf`](./docs/JD_9853_DS_Preliminary_V0_00_20230424_161c1b3786.pdf) |
| Init code | [`docs/C_JD9853_BOE1.45_WV015GES-NB80_172x320_230831_johnson.c`](./docs/C_JD9853_BOE1.45_WV015GES-NB80_172x320_230831_johnson.c) |
| Touch driver datasheet (CST08C) | [`docs/CST_08_C_V1_0_c0ecd3b568.pdf`](./docs/CST_08_C_V1_0_c0ecd3b568.pdf) |
| Touch driver datasheet (CST816) | [`docs/CST_816_T_v1_3_1_69c246954d.pdf`](./docs/CST_816_T_v1_3_1_69c246954d.pdf) |
| Adapter board schematic | [`docs/YDP147BT001-V12_转接板原理图.png`](./docs/YDP147BT001-V12_%E8%BD%AC%E6%8E%A5%E6%9D%BF%E5%8E%9F%E7%90%86%E5%9B%BE.png) |

### Samples

- [ESP32-S3 JD9853 SPI + LVGL9](./examples/s3-idf_jd9853-spi_lvgl-v9/)
- [ESP32-S3 CST08C touch I2C test](./examples/display-touch-test/S3-IDF_CST08C-I2C/)

## Buy

<p align="center">
  <a href="https://www.aliexpress.com/store/1105701619"><img alt="AliExpress store" src="https://img.shields.io/badge/AliExpress-Official_Store-FF6A00?style=for-the-badge" /></a>
  &nbsp;&nbsp;
  <a href="https://shop110742373.taobao.com/"><img alt="Taobao store" src="https://img.shields.io/badge/Taobao-Official_Store-FF6A00?style=for-the-badge" /></a>
</p>

**Overseas (AliExpress)**

- Store: [OSPTEK Official Store](https://www.aliexpress.com/store/1105701619)

**China (Taobao)**

- Store: [鱼鹰光电工厂店](https://shop110742373.taobao.com/)

## Support

- Technical support / product inquiry: <luyu@osptek.com>
- QQ group (China): **985881096**
- Website: <https://osptek.com/>
- Feel free to open an Issue in this repository if you have any questions

---

<p align="center"><sub>© 2026 OSPTEK · Materials in this repository are licensed under CC BY 4.0</sub></p>
