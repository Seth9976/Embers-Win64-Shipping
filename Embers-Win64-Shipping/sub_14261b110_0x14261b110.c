// 函数: sub_14261b110
// 地址: 0x14261b110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142609370(*(arg1 + 0x350))
void* rbx = arg1 + 0x38
int64_t i_1 = 8
*(arg1 + 0x350) = 0
int64_t i_2 = 8
int64_t result
int64_t i

do
    result = sub_142609160(*rbx)
    *rbx = 0
    rbx += 0x68
    i = i_2
    i_2 -= 1
while (i != 1)
void* rsi = arg1 + 0x3a0

do
    int64_t* rbx_1 = *(rsi - 0x68)
    rsi -= 0x68
    i_1 -= 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)
while (i_1 != 0)

return result
