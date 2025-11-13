// 函数: sub_1428b69f0
// 地址: 0x1428b69f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = 1
FILE* _Stream = *(arg1 + 0x38)
int32_t var_18_1

if (arg2 - 1 u> 0x84)
    rbx = 0
else
    switch (arg2)
        case 1, 0x80
            rbx = fseek(_Stream, arg3, 0)
        case 2
            rbx = feof(_Stream)
        case 3, 0x85
            rbx = ftell(_Stream)
        case 4, 5, 6, 7, 0xa, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 
                0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 
                0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 
                0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 
                0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 
                0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6d, 0x6e, 0x6f, 
                0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 
                0x7e, 0x7f, 0x81, 0x82, 0x83, 0x84
            rbx = 0
        case 8
            rbx = *(arg1 + 0x24)
        case 9
            *(arg1 + 0x24) = arg3
        case 0xb
            if (fflush(_Stream) == 0xffffffff)
                sub_1428a5670(2, 0x12, GetLastError(), "crypto\bio\bss_file.c", 0x13e)
                sub_1428a4880(1)
                var_18_1 = 0x140
            label_1428b6c48:
                sub_1428a5670(0x20, 0x74, 2, "crypto\bio\bss_file.c", var_18_1)
                rbx = 0
        case 0x6a
            sub_1428b6d30(arg1)
            *(arg1 + 0x38) = arg4
            *(arg1 + 0x20) = 1
            *(arg1 + 0x24) = arg3 & 1
            int32_t _FileHandleSrc = _fileno(arg4)
            
            if ((arg3.b & 0x10) == 0)
                _setmode(_FileHandleSrc, 0x8000)
            else
                _setmode(_FileHandleSrc, 0x4000)
        case 0x6b
            if (arg4 != 0)
                *arg4 = _Stream
        case 0x6c
            sub_1428b6d30(arg1)
            *(arg1 + 0x24) = arg3 & 1
            void* const rdx_4
            
            if ((arg3.b & 8) != 0)
                rdx_4 = &data_143507c28
                
                if ((arg3.b & 2) == 0)
                    rdx_4 = &data_142d94144
                
                goto label_1428b6b29
            
            if ((arg3.b & 6) != 6)
                if ((arg3.b & 4) != 0)
                    rdx_4 = &data_142d8c8e4
                    goto label_1428b6b29
                
                if ((arg3.b & 2) != 0)
                    rdx_4 = &data_142d948d8
                    goto label_1428b6b29
                
                sub_1428a5670(0x20, 0x74, 0x65, "crypto\bio\bss_file.c", 0x116)
                rbx = 0
            else
                rdx_4 = &data_143507c2c
            label_1428b6b29:
                void arg_10
                sub_1428a7090(&arg_10, rdx_4, 4)
                void* const rdx_5 = &data_142d8d918
                
                if ((arg3.b & 0x10) != 0)
                    rdx_5 = &data_142d949b4
                
                sub_1428a7010(&arg_10, rdx_5, 4)
                FILE* rax_12 = sub_142905e40(arg4, &arg_10)
                
                if (rax_12 == 0)
                    sub_1428a5670(2, 1, GetLastError(), "crypto\bio\bss_file.c", 0x122)
                    void* const var_10_1 = &data_1434d9fcc
                    sub_1428a4880(5)
                    var_18_1 = 0x124
                    goto label_1428b6c48
                
                *(arg1 + 0x38) = rax_12
                *(arg1 + 0x20) = 1
                sub_142899cc0(arg1, 0)
return zx.q(rbx)
