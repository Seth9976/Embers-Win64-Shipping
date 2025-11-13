// 函数: sub_142658cd0
// 地址: 0x142658cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()
int64_t* rsi_1

if (rax_1 == 0)
    rsi_1 = nullptr
else
    rsi_1 = *(rax_1 + 0x120)
    
    if (rsi_1 == 0)
        rsi_1 = nullptr
    else
        void* rax_2 = sub_14269bba0()
        void* rdx_1 = rsi_1[2]
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            rsi_1 = nullptr

void* rax_6 = sub_140d21950(arg1, sub_142548ca0())
void* result

if (rax_6 != 0)
    int64_t rdx_3 = *rax_6
    int64_t rax_7 = (*(rdx_3 + 0x10))(rax_6, rdx_3)
    int64_t r8_2 = *rax_6
    void var_18
    result =
        (*(*rsi_1 + 0x2b0))(rsi_1, rax_7, (*(r8_2 + 0x18))(rax_6, &var_18, r8_2), &data_143dbb1f8)

if (rax_6 == 0 || result == 0)
    result = sub_142657070(rsi_1, 0)
    
    if (result == 0)
        return result

return result + 0x220
