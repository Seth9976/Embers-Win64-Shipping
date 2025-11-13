// 函数: sub_1428dcc80
// 地址: 0x1428dcc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* result

if (arg1 == 0)
    result = sub_1428a6a70(0x160)
else
    result = sub_1428a71d0(0x160)

if (result != 0)
    *(result + 0x10) = 0
    *(result + 0x18) = data_144020d50
    *(result + 8) = arg4
    int64_t rax_3
    
    if (arg4 != 0)
        *(result + 0x6c) = data_143b85a98
        rax_3 = data_143b85aa8
    else
        *(result + 0x150) = sub_142898270
        *(result + 0x158) = sub_142897f10
        *(result + 0x6c) = data_143b85a94
        rax_3 = data_143b85aa0
    
    *(result + 0x78) = rax_3
    *(result + 0x140) = sub_142897fe0
    *(result + 0x148) = sub_142897ee0
    
    if (sub_1428dc960(result, arg2, arg3) != 0)
        int32_t rbx_1
        int32_t rdi_1
        
        if (arg4 != 0)
            CRITICAL_SECTION* rcx_3 = *arg4
            
            if (rcx_3 != 0)
                sub_1428a5c40(rcx_3)
            
            rdi_1 = *(result + 0x28)
            rbx_1 = arg4[5].d
            sub_1428dd090(arg4)
        
        if (arg4 == 0 || rdi_1 s<= rbx_1)
            return result
        
        sub_1428a5670(0x24, 0x6d, 0x83, "crypto\rand\drbg_lib.c", 0xdb)
    
    if (*(result + 0x10) == 0)
        sub_1428a6780(result)
    else
        sub_1428a7190(result)
else
    sub_1428a5670((result + 0x24).d, (result + 0x6d).d, (result + 0x41).d, 
        "crypto\rand\drbg_lib.c", 0xb2)

return nullptr
