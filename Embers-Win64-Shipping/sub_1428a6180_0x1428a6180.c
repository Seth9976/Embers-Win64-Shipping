// 函数: sub_1428a6180
// 地址: 0x1428a6180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbx = -1
void* rax = sub_1428a6690(arg1)

if (rax != 0)
    int32_t* rax_1
    int32_t rax_2
    
    if (*rax == 0)
        rax_1 = sub_142898ba0()
        *rax = rax_1
        
        if (rax_1 != 0)
            rax_2 = sub_142898d50(rax_1, 0)
    
    if (*rax != 0 || (rax_1 != 0 && rax_2 != 0))
        int32_t* rax_3 = sub_1428a6730(0x28)
        
        if (rax_3 != 0)
            *rax_3 = arg2
            *(rax_3 + 8) = arg3
            *(rax_3 + 0x10) = arg4
            *(rax_3 + 0x20) = arg5
            *(rax_3 + 0x18) = arg6
            int32_t rax_6 = sub_142898d50(*rax, 0)
            
            if (rax_6 != 0)
                rbx = sub_142898c70(*rax) - 1
                sub_142898dc0(*rax, rbx, rax_3)
            else
                sub_1428a5670(rax_6 + 0xf, rax_6 + 0x64, rax_6 + 0x41, "crypto\ex_data.c", 0xbd)
                sub_1428a6780(rax_3)
        else
            sub_1428a5670((rax_3 + 0xf).d, (&rax_3[0x19]).d, (rax_3 + 0x41).d, "crypto\ex_data.c", 
                0xb3)
    else
        sub_1428a5670(0xf, 0x64, 0x41, "crypto\ex_data.c", 0xac)
    
    sub_1428a5d00(data_143fecac0)

return zx.q(rbx)
