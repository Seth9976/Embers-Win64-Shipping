// 函数: sub_140ba19d0
// 地址: 0x140ba19d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* i_1 = *(arg1 + 0x48)
void* var_20 = arg1
int32_t var_10_1 = 0xffffffff
int16_t var_c_1 = 0x100
char var_a_1 = 0
sub_140bad960(&var_20)
void* i_3

for (void* i = i_1; i != 0; i = i_3)
    void* rax_1 = sub_140bdfab0()
    void* rdx = *(i + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    void* const i_2
    
    if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        i_2 = nullptr
    else
        i_2 = i
    
    void* r8_1
    
    if (i_2 != 0)
        void* const i_4 = i_2
        void* j_1 = *(i_2 + 0x48)
        int32_t var_28_1 = 0xffffffff
        int16_t var_24_1 = 0x100
        char var_22_1 = 0
        sub_140bad960(&i_4)
        void* j_2
        
        for (void* j = j_1; j != 0; j = j_2)
            r8_1.b = 1
            sub_140bc81e0(arg2, j, r8_1.b)
            j_2 = *(j + 0x28)
            sub_140bad960(&i_4)
    
    r8_1.b = 1
    sub_140bc81e0(arg2, i, r8_1.b)
    i_3 = *(i + 0x28)
    sub_140bad960(&var_20)
