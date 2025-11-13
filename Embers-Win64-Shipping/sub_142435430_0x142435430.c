// 函数: sub_142435430
// 地址: 0x142435430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x11b) & 0x40) != 0)
    sub_140920c10(&data_143a306f8, arg1)
    sub_141ecfc70(arg1)
    int64_t* rcx_1 = *(arg1 + 0x120)
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x268))(rcx_1, 0)
    
    int64_t* rcx_2 = *(arg1 + 0x468)
    *(arg1 + 0x120) = 0
    
    if (rcx_2 != 0)
        sub_14218b5e0(rcx_2)
        *(arg1 + 0x468) = 0
    
    int64_t* rdi_1 = *(arg1 + 0x1f8)
    
    if (rdi_1 != 0)
        sub_14225afc0(rdi_1)
        j_sub_140a74f90(rdi_1)
        *(arg1 + 0x1f8) = 0
        int64_t* rcx_5 = data_143f52708
        
        if (rcx_5 != 0)
            sub_142249870(rcx_5)
    
    int64_t* rcx_6 = *(arg1 + 0x1b0)
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x228))(rcx_6)
        *(arg1 + 0x1b0) = 0

int64_t rax_3 = data_143f5e920

if (rax_3 == arg1)
    rax_3 = 0

data_143f5e920 = rax_3
j_sub_1423c0390()
int64_t r8 = data_143f5b210
(*(r8 + 0x10))(&data_143f5b210, *(arg1 + 0x470), r8)
int64_t* rcx_7 = *(arg1 + 0x300)
*(arg1 + 0x470) = 0

if (rcx_7 != 0)
    (**rcx_7)(rcx_7, 1)

uint64_t rax_5 = sub_140d21d80(arg1)
int64_t* var_18 = nullptr
int32_t var_10 = 0
sub_140d3ccc0(rax_5, &var_18, 0, 0, 0)
int64_t* rdi_2 = var_18
void* rbp = &rdi_2[sx.q(var_10)]

if (rdi_2 == rbp)
label_1424355be:
    *(rax_5 + 0x50) &= 0xfffdffff
else
    while (true)
        void* rsi_1 = *rdi_2
        
        if (rsi_1 != 0)
            void* rax_6 = sub_1425be5e0()
            void* rdx_5 = *(rsi_1 + 0x10)
            int64_t rax_7 = sx.q(*(rax_6 + 0x38))
            
            if (rax_7.d s<= *(rdx_5 + 0x38) && *(*(rdx_5 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30
                    && rsi_1 != arg1)
                break
        
        rdi_2 = &rdi_2[1]
        
        if (rdi_2 == rbp)
            goto label_1424355be

int64_t* rcx_12 = var_18

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

return sub_140cdba30(arg1) __tailcall
