// 函数: sub_1409dbfb0
// 地址: 0x1409dbfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int64_t* var_40 = arg3
int64_t var_48 = &arg1[5][0x40]
int32_t var_38 = rdi.d
sub_14099e0c0(&arg3[2], &var_48)
int64_t r14 = 0
int32_t var_68
int64_t var_60

if (*arg3 == data_143f36118)
    int32_t var_58
    int32_t* var_50
    void arg_10
    
    if (*(arg3 + 0x4c) == 0)
        int64_t rsi_3 = rdi * 0x18
        int32_t rbx_3 = *(rsi_3 + arg1[5][0xe])
        sub_1409afd50(&arg1[0x99], &var_58)
        int32_t rax_12 = var_58
        *var_50 = rbx_3
        var_50[1] = 0xffffffff
        sub_1409b8a30(&arg1[0x99], &arg_10, rbx_3, var_50, rax_12, nullptr)
        int32_t rbx_4 = *(rsi_3 + arg1[5][0xe] + 4)
        sub_1409afd50(&arg1[0x99], &var_58)
        var_60 = 0
        var_68 = var_58
        *var_50 = rbx_4
        var_50[1] = 0xffffffff
        sub_1409b8a30(&arg1[0x99], &arg_10, rbx_4, var_50, var_68, nullptr)
    else
        TEB* gsbase
        
        if (data_143cede90
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143cede90)
            
            if (data_143cede90 == 0xffffffff)
                atexit(sub_142cb83e0)
                _Init_thread_footer(&data_143cede90)
        
        int32_t r8 = data_143cede8c
        int32_t rsi_1 = 0
        data_143cede88 = 0
        
        if (r8 s< 2)
            sub_1405dadb0(&data_143cede80, 2)
            r8 = data_143cede8c
            rsi_1 = data_143cede88
        
        int32_t rbx_1 = arg1[5][0xe][rdi * 6]
        data_143cede88 = rsi_1 + 1
        
        if (rsi_1 + 1 s> r8)
            sub_1405a4cf0(&data_143cede80)
        
        *(data_143cede80 + (sx.q(rsi_1) << 2)) = rbx_1
        int64_t rsi_2 = sx.q(data_143cede88)
        int32_t rax_9 = (rsi_2 + 1).d
        bool cond:2_1 = rax_9 s<= data_143cede8c
        int32_t rbx_2 = *(arg1[5][0xe] + rdi * 0x18 + 4)
        data_143cede88 = rax_9
        
        if (not(cond:2_1))
            sub_1405a4cf0(&data_143cede80)
        
        *(data_143cede80 + (rsi_2 << 2)) = rbx_2
        sub_1409e2460(arg1, &data_143cede80)
    
    int64_t* rax_15 = sub_1409c2bd0(arg1[5], &var_48, rdi.d)
    int32_t rdx_11 = arg1[0x7c].d
    int32_t rbx_7 = rax_15[1].d - *(arg1 + 0x40c) + rdx_11
    
    if (rbx_7 s> rdx_11 - *(arg1 + 0x40c))
        sub_1407c2fa0(&arg1[0x7b], rbx_7)
        int32_t rax_18
        
        if (rbx_7 u< 4)
            rax_18 = 1
        else
            uint32_t rbx_8 = rbx_7 u>> 1
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rbx_8 + 8)
            int32_t rcx_16
            
            if (rbx_8 == 0xfffffff8)
                rcx_16 = 0x20
            else
                rcx_16 = 0x1f - temp0_2
            
            int32_t rcx_18 = rcx_16 << 0x1a s>> 0x1f
            uint64_t rflags_2
            char temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rbx_8 + 7)
            
            if (rcx_18 == 0)
                rax_18 = 1
            else
                rax_18 = 1 << ((not.d(rcx_18)).b & (0x20 - (0x1f - temp0_3)))
        
        int32_t rcx_21 = arg1[0x84].d
        
        if (rcx_21 == 0 || rcx_21 s< rax_18)
            arg1[0x84].d = rax_18
            sub_140771f10(&arg1[0x7b])
    
    int32_t* i = *rax_15
    
    for (void* r13_1 = &i[sx.q(rax_15[1].d)]; i != r13_1; i = &i[1])
        sub_1409afd50(&arg1[0x7b], &var_58)
        var_60 = 0
        *var_50 = *i
        int32_t rax_21 = var_58
        var_50[1] = 0xffffffff
        var_68 = rax_21
        sub_1409b8a30(&arg1[0x7b], &arg_10, *var_50, var_50, var_68, nullptr)
    
    rax_15[1].d = 0
    
    if (*(rax_15 + 0xc) s<= 0xffffffff)
        sub_1405dadb0(rax_15, 0)
    
    int64_t rcx_27 = var_48
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)

int64_t* rbx_10 = arg1[0x77]
void* result = &rbx_10[arg1[0x78]]
uint64_t rsi_6 = sx.q(arg1[0x78].d) << 3 u>> 3

if (rbx_10 u> result)
    rsi_6 = 0

if (rsi_6 != 0)
    do
        int64_t* rcx_28 = *rbx_10
        result = (*(*rcx_28 + 0x320))(rcx_28, arg1, zx.q(rdi.d), arg3, var_68, var_60)
        r14 += 1
        rbx_10 = &rbx_10[1]
    while (r14 != rsi_6)

return result
