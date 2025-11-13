// 函数: sub_142c8cfa0
// 地址: 0x142c8cfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = 1
int64_t* rax = sub_14289a060(arg1)
int64_t* rax_1 = sub_14289a660(arg1)
int32_t* rdi = *rax

if (rdi == 0 && arg2 != 0x6d)
    return 0

int64_t* rcx_8

if (arg2 - 1 u> 0x7e)
label_142c8d3d6:
    rcx_8 = *(rdi + 0x10)
label_142c8d3da:
    rbx = sub_142899cf0(rcx_8, arg2, arg3, arg4)
else
    switch (arg2)
        case 1
            sub_142850b10(rdi, &__dos_header)
            void* rax_5 = *(rdi + 8)
            int64_t rcx_4 = *(rdi + 0x30)
            
            if (rcx_4 == *(rax_5 + 0x30))
                sub_1428507d0(rdi)
            else if (rcx_4 == *(rax_5 + 0x28))
                sub_1428505a0(rdi)
            
            if (sub_14284e8b0(rdi) != 0)
                if (rax_1 != 0)
                    rcx_8 = rax_1
                    goto label_142c8d3da
                
                rcx_8 = *(rdi + 0x10)
                
                if (rcx_8 != 0)
                    goto label_142c8d3da
            else
                rbx = 0
        case 2, 4, 5, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 
                0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 
                0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
                0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 
                0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 
                0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 
                0x62, 0x63, 0x64, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6f, 0x70, 0x71, 0x72, 
                0x73, 0x74, 0x75, 0x76, 0x78, 0x79, 0x7a, 0x7b, 0x7c
            goto label_142c8d3d6
        case 3, 0xe
            rbx = 0
        case 6
            if (rax_1 != 0 && rax_1 != *(rdi + 0x10))
                sub_14289aa00(rax_1)
                sub_1428505e0(rdi, rax_1, rax_1)
        case 7
            if (arg1 == arg4)
                sub_1428505e0(rdi, nullptr, nullptr)
        case 8
            rbx = sub_14289a070(arg1)
        case 9
            sub_14289a9e0(arg1, arg3)
        case 0xa
            int32_t rax_15 = sub_142850350(rdi)
            rbx = rax_15
            
            if (rax_15 == 0)
                rbx = sub_142899cf0(*(rdi + 0x10), rax_15 + 0xa, 0, nullptr)
        case 0xb
            sub_142899cc0(arg1, 0xf)
            rbx = sub_142899cf0(*(rdi + 0x18), arg2, arg3, arg4)
            sub_142899cd0(arg1)
        case 0xc
            int64_t* rax_23 = sub_14289a060(arg4)
            int32_t** rbx_1 = rax_23
            sub_14284f4d0(*rax_23)
            int32_t* rax_24 = sub_14284ef90(rdi)
            *rbx_1 = rax_24
            rbx_1[1].d = rax[1].d
            *(rbx_1 + 0xc) = *(rax + 0xc)
            rbx_1[2] = rax[2]
            rbx_1[3].d = rax[3].d
            *(rbx_1 + 0x1c) = *(rax + 0x1c)
            rbx.b = rax_24 != 0
        case 0xd
            rcx_8 = *(rdi + 0x18)
            goto label_142c8d3da
        case 0x65
            sub_142899cc0(arg1, 0xf)
            sub_14289a9d0(arg1, 0)
            int32_t rax_17 = sub_14284eec0(rdi)
            rbx = rax_17
            int32_t rax_18 = sub_14284fa70(rdi, rax_17)
            
            if (rax_18 == 2)
                sub_14289a9a0(arg1, 9)
            else if (rax_18 == 3)
                sub_14289a9a0(arg1, 0xa)
            else if (rax_18 == 4)
                sub_14289a9a0(arg1, 0xc)
                sub_14289a9d0(arg1, 1)
            else if (rax_18 == 7)
                sub_14289a9a0(arg1, rax_18 + 5)
                sub_14289a9d0(arg1, sub_1408cb8f0(rax_1))
        case 0x6d
            if (rdi != 0)
                if (arg1 != 0)
                    int64_t* rax_9 = sub_14289a060(arg1)
                    void* rcx_11 = *rax_9
                    
                    if (rcx_11 != 0)
                        sub_142850b10(rcx_11)
                    
                    if (sub_14289a070(arg1) != 0)
                        if (sub_140611e80(arg1) != 0)
                            sub_14284f4d0(*rax_9)
                        
                        sub_142899cc0(arg1, 0xffffffff)
                        sub_14289a9b0(arg1, 0)
                    
                    sub_1428a6780(rax_9)
                
                int64_t rax_12 = sub_1428a6a70(0x20)
                
                if (rax_12 == 0)
                    sub_1428a5670((rax_12 + 0x20).d, (rax_12 + 0x76).d, (rax_12 + 0x41).d, 
                        "ssl\bio_ssl.c", 0x3d)
                    return 0
                
                sub_14289a9b0(arg1, 0)
                sub_14289a990(arg1, rax_12)
                sub_142899cc0(arg1, 0xffffffff)
            
            sub_14289a9e0(arg1, arg3)
            *rax = arg4
            int64_t* rax_13 = sub_14060aa60(arg4)
            
            if (rax_13 != 0)
                if (rax_1 != 0)
                    sub_14289a6f0(rax_13, rax_1)
                
                sub_14289a9c0(arg1, rax_13)
                sub_14289aa00(rax_13)
            
            sub_14289a9b0(arg1, 1)
        case 0x6e
            if (arg4 == 0)
                rbx = 0
            else
                *arg4 = rdi
        case 0x77
            if (arg3 == 0)
                sub_1428505a0(rdi)
            else
                sub_1428507d0(rdi)
        case 0x7d
            rbx = *(rax + 0xc)
            
            if (arg3 s>= 0x200)
                *(rax + 0xc) = arg3
        case 0x7e
            rbx = rax[1].d
        case 0x7f
            rbx = rax[3].d
            int32_t rax_7 = 5
            
            if (arg3 s>= 0x3c)
                rax_7 = arg3
            
            rax[3].d = rax_7
            *(rax + 0x1c) = _time64(nullptr)
return zx.q(rbx)
