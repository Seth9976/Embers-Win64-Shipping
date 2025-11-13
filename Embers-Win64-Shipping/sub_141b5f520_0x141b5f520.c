// 函数: sub_141b5f520
// 地址: 0x141b5f520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = zx.d(arg1[0x43].b) + 1
uint64_t rax_1 = zx.q(r8_1.b - (zx.q(r8_1 u/ 3) * 3).b)
arg1[0x43].b = rax_1.b
void* result = &arg1[0x2b + rax_1 * 8]

if (sub_140e1b0c0(result) == 0)
    int128_t zmm6 = 0x3a83126f
    char i
    
    do
        char rax_5
        
        if (sub_140a80f80() == 0)
            (*(*arg1 + 0xa8))(arg1)
            int32_t rcx_3 = zx.d(arg1[0x43].b) + 1
            char rcx_4 = rcx_3.b - (zx.q(rcx_3 u/ 3) * 3).b
            rax_5 = rcx_4
            arg1[0x43].b = rcx_4
        else
            zmm6 = sub_140b73230(zmm6)
            rax_5 = arg1[0x43].b
        
        result = &arg1[0x2b + zx.q(rax_5) * 8]
        i = sub_140e1b0c0(result)
    while (i == 0)

void* r15_2 = &arg1[zx.q(arg1[0x43].b) * 2]
int32_t i_2 = *(r15_2 + 0x250)

if (i_2 != 0)
    int64_t* rsi_1 = *(r15_2 + 0x248) + 8
    int32_t i_1
    
    do
        int64_t* rbx_1 = *rsi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp6_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi_1 = &rsi_1[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

bool cond:0 = *(r15_2 + 0x254) == 0
*(r15_2 + 0x250) = 0

if (not(cond:0))
    sub_1405a5410(r15_2 + 0x248, 0)

sub_140de8e10(result)
sub_140e27880(result, *(arg1 + 0x344))
return result
