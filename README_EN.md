# 1.47" 172×320 TFT SPI module (JD9853) — documentation & samples

**简体中文：** [`README.md`](README.md)

---

> This repository provides **sample projects** for this module, together with datasheets, specifications, and interface / bring-up documentation for selection reference and integration.

## Product overview

| Item | Description |
|:--|:--|
| Module | 1.47-inch **TFT** panel, **172×320** resolution |
| Interface | **SPI** |
| Driver IC | **JD9853** |
| Spec ID | **`1.47-tft-172x320-spi-jd9853`** is the common product designation in documentation |

---

## Repository layout

### Top-level

| Path | Contents |
|:--|:--|
| `docs/` | Datasheets, specifications, initialization notes, adapter documentation |
| `examples/` | **Sample projects** by category |

### `examples/` layout

| Location | Description (internal package folder) |
|:--|:--|
| `examples/` root | **ESP-IDF代码** (JD9853 SPI + LVGL9) |
| `display-touch-test/` | **单独测试触摸代码** |

### Sample project paths

#### Baseline (`examples/` root)

| Description | Path |
|:--|:--|
| JD9853 SPI + LVGL9 | `examples/s3-idf_jd9853-spi_lvgl-v9/` |

#### Touch-only test (`display-touch-test/`)

| Description | Path |
|:--|:--|
| CST08C touch I2C test | `examples/display-touch-test/S3-IDF_CST08C-I2C/` |
