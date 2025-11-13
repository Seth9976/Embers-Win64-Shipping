// 函数: sub_140f8d4f0
// 地址: 0x140f8d4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x5a].d == 0)
label_140f8d539:
    int64_t* rax_4 = sub_140ac6680(sub_140d44910(&arg1[0x55]))
    int32_t rcx_3 = rax_4[1].d
    int32_t rdx = rcx_3 - 1
    
    if (rcx_3 == 0)
        rdx = 0
    
    if (rdx s<= 0x14)
        int64_t* rax_5 = sub_140ac6680(arg2, rdx)
        int16_t* const rcx_5 = &data_142d40450
        int16_t* const r8_1
        
        if (rax_5[1].d == 0)
            r8_1 = &data_142d40450
        else
            r8_1 = *rax_5
        
        if (rax_4[1].d != 0)
            rcx_5 = *rax_4
        
        void* r8_2 = r8_1 - rcx_5
        uint32_t i
        uint32_t rdx_1
        
        do
            rdx_1 = zx.d(*rcx_5)
            i = zx.d(*(rcx_5 + r8_2))
            
            if (rdx_1 != i)
                break
            
            rcx_5 = &rcx_5[1]
        while (i != 0)
        
        if (rdx_1 - i == 0)
            return i
else
    int64_t* rcx = arg1[0x59]
    
    if (rcx == 0)
        goto label_140f8d539
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_140f8d539

void* rdx_3 = arg2[1]
int64_t r8_3 = *arg2

if (rdx_3 != 0)
    *(rdx_3 + 8) += 1

int64_t rax_6 = arg1[0x55]
int32_t rcx_6 = arg2[2].d
arg1[0x55] = r8_3
int64_t var_38_2 = rax_6
int64_t* rax_7 = arg1[0x56]
arg1[0x56] = rdx_3
arg1[0x57].d = rcx_6
int32_t var_28_1 = rcx_6
char var_20_1 = 1
int64_t var_18 = 0
int32_t var_10_1 = 0
arg1[0x58].b = 1
sub_1407473e0(&arg1[0x59], &var_18)
sub_140745b20(&var_18)

if (rax_7 != 0)
    rax_7[1].d -= 1
    
    if (rax_7[1].d == 1)
        (**rax_7)(rax_7)
        int32_t rsi_2 = *(rax_7 + 0xc)
        *(rax_7 + 0xc) -= 1
        
        if (rsi_2 == 1)
            (*(*rax_7 + 8))(rax_7, zx.q(rsi_2))

if (*(arg1 + 0x794) != 0 && arg1[0xf2].b != 0)
    arg1[0xf2].b = 0

return sub_140e19ef0(arg1, 5)
