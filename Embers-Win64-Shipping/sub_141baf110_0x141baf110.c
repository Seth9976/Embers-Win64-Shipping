// 函数: sub_141baf110
// 地址: 0x141baf110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || (*(arg1 + 0x1b4) & 0x40) != 0)
    return 0

for (int64_t* i = *(arg1 + 0x178); i != &i[sx.q(*(arg1 + 0x180))]; i = &i[1])
    void* j = *i
    
    if (*(j + 0x408) == arg2)
        int64_t* rax_1 = *(arg1 + 0x188)
        void* r8_1 = &rax_1[sx.q(*(arg1 + 0x190))]
        
        if (rax_1 == r8_1)
            return j
        
        while (*rax_1 != j)
            rax_1 = &rax_1[1]
            
            if (rax_1 == r8_1)
                return j

int64_t rsi = 0
int64_t arg_10 = 0

if ((1 & sub_140b5b8a0(0, 0)) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* rax_5 = sub_140d2dfc0(sub_141c112c0(), arg1, 0, 0x40, 0, 0, 0, 0, 0)
int64_t rbx = sx.q(*(arg1 + 0x180))
int32_t rcx_3 = (rbx + 1).d
*(arg1 + 0x180) = rcx_3

if (rcx_3 s> *(arg1 + 0x184))
    sub_1405a4d70(arg1 + 0x178)

*(*(arg1 + 0x178) + (rbx << 3)) = rax_5
*(rax_5 + 0x408) = arg2
sub_140d3a3a0(rax_5 + 0x410, arg1)
int64_t* rcx_6 = *(rax_5 + 0x408)
void* rax_8 = (*(*rcx_6 + 0x280))(rcx_6)
int64_t r9 = 0
int64_t rdx_3 = 0
int128_t zmm0 = *(rax_8 + 0xf8)
int64_t rcx_7 = zmm0.q
int64_t rax_9 = zmm0:8.q

if (rcx_7.b == 0)
    r9 = 4

if (rax_9.b == 1)
    rdx_3 = 4

*(rax_5 + 0x74c) =
    *(rdx_3 + &data_14302eb90) - *(r9 + &data_14302eb88) - (rcx_7 u>> 0x20).d + (rax_9 u>> 0x20).d
*(rax_5 + 0x738) = *(rax_8 + 0x108)
int64_t var_28_1 = (*(rax_8 + 0xf8)).q

if (var_28_1.b == 0)
    rsi = 4

*(rax_5 + 0x740) = (var_28_1 u>> 0x20).d + *(rsi + &data_14302eb88)
return rax_5
