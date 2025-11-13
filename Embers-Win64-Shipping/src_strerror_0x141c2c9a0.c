// 函数: src_strerror
// 地址: 0x141c2c9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 u> 0x17)
    return 0

switch (arg1)
    case 0
        return "No error."
    case 1
        return "Malloc failed."
    case 2
        return "SRC_STATE pointer is NULL."
    case 3
        return "SRC_DATA pointer is NULL."
    case 4
        return "SRC_DATA->data_out or SRC_DATA->data_in is NULL."
    case 5
        return "Internal error. No private data."
    case 6
        return "SRC ratio outside [1/256, 256] range."
    case 7
        return "Internal error. No process pointer."
    case 8
        return "Internal error. SHIFT_BITS too large."
    case 9
        return "Internal error. Filter length too large."
    case 0xa
        return "Bad converter number."
    case 0xb
        return "Channel count must be >= 1."
    case 0xc
        return "Internal error. Bad buffer length. Please report this."
    case 0xd
        return "Internal error. Input data / internal buffer size difference. Please report this."
    case 0xe
        return "Internal error. Private pointer is NULL. Please report this."
    case 0xf
        return "src_process() called without reset after end_of_input."
    case 0x10
        return "Input and output data arrays overlap."
    case 0x11
        return "Supplied callback function pointer is NULL."
    case 0x12
        return "Calling mode differs from initialisation mode (ie process v callback)."
    case 0x13
        return "Callback function pointer is NULL in src_callback_read ()."
    case 0x14
        return "This converter only allows constant conversion ratios."
    case 0x15
        return "Internal error : Bad length in prepare_data ()."
    case 0x16
        return "Error : Someone is trampling on my internal state."
    case 0x17
        return "Placeholder. No error defined for this error number."
