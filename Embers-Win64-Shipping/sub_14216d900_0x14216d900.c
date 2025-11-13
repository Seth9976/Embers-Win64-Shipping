// 函数: sub_14216d900
// 地址: 0x14216d900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)
int32_t rax = 0
int16_t* var_118 = nullptr
int32_t var_110 = 0
int32_t var_10c = 0
uint64_t var_108

if (rcx != 0)
    if ((*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1 = *(arg1 + 8)
        int64_t* rax_4 = (*(*rcx_1 + 0x30))(rcx_1, &var_108)
        
        if (&var_118 != rax_4)
            int16_t* rcx_2 = var_118
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            var_118 = *rax_4
            *rax_4 = 0
            var_110 = rax_4[1].d
            int32_t var_10c_1 = *(rax_4 + 0xc)
            rax_4[1] = 0
        
        uint64_t rcx_4 = var_108
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
    
    rax = var_110

void** const var_f8
int64_t* var_f0
char arg_8
int64_t arg_10

if (rax == 0 || rax - 1 s<= 0)
    arg_8 = 3
    *(arg1 + 0x20) = 0
    
    if (*(arg1 + 0x24) != 0)
        sub_1405c5510(arg1 + 0x18, 0)
    
    arg_10 = 0
    memset(&var_f8, 0, 0x90)
    sub_140b4c2a0(&var_f8)
    int64_t var_68_2 = 0
    var_f8 = &data_142d6ad48
    void* var_60_2 = arg1 + 0x18
    int64_t var_58_2 = 0
    sub_140b552b0(&var_f8, 1)
    var_f8[0x1b](&var_f8, 0)
    char* rdx_25 = *var_f0
    
    if (&rdx_25[1] u> var_f0[1])
        var_f8[0x2a](&var_f8, &arg_8, 1)
    else
        arg_8 = *rdx_25
        *var_f0 += 1
else
    int64_t rdi_1 = sx.q(rax - 1)
    uint32_t r12_2 = ((rdi_1 + 1) u>> 1).d
    char rax_7 = sub_140a24720(&var_118)
    char rcx_6
    
    if (rax_7 != 0 || (((rax - 1).b & 1) == 0 && r12_2 s< 0xff))
        rcx_6 = 1
    else
        rcx_6 = 0
    
    arg_8 = rcx_6
    
    if (rcx_6 != 0 && rax_7 == 0)
        int16_t* const rsi_1 = &data_142d40450
        
        if (var_110 != 0)
            rsi_1 = var_118
        
        if (rax - 1 s> 0)
            int64_t rbx_2 = 0
            
            while (true)
                if (iswxdigit(rsi_1[rbx_2]) != 0 && iswupper(rsi_1[rbx_2]) == 0)
                    rbx_2 += 1
                    
                    if (rbx_2 s>= rdi_1)
                        break
                    
                    continue
                
                arg_8 = 0
                break
    
    int64_t* rcx_9 = *(arg1 + 8)
    char rax_11
    
    if (rcx_9 != 0)
        rax_11 = (*(*rcx_9 + 0x28))(rcx_9)
    
    int64_t arg_20
    int64_t* rax_13
    
    if (rcx_9 == 0 || rax_11 == 0)
        arg_10 = 0
        rax_13 = &arg_10
    else
        int64_t* rcx_10 = *(arg1 + 8)
        rax_13 = (*(*rcx_10 + 0x10))(rcx_10, &arg_20)
    
    int64_t arg_18 = *rax_13
    int64_t* rax_15
    int512_t zmm1_1
    rax_15, zmm1_1 = sub_142168400()
    int64_t r8_1 = *rax_15
    char rax_16 = (*(r8_1 + 0x290))(rax_15, arg_18, r8_1)
    char rdi_2 = rax_16
    
    if (rax_16 == 0)
        bool cond:1_1 = sub_140b5b8a0(arg_18.d, 0) == 0
        int32_t rcx_12
        rcx_12.b = arg_18:4.d != 0
        rcx_12.b |= cond:1_1
        
        if (rcx_12.b != 0)
            rdi_2 = 0x1f
    
    char rcx_13 = arg_8
    *(arg1 + 0x20) = 0
    rcx_13 |= rdi_2 << 3
    arg_8 = rcx_13
    
    if ((rcx_13 & 1) == 0)
        if (*(arg1 + 0x24) != rax - 1)
            sub_1405c5510(arg1 + 0x18, rax - 1)
        
        arg_10 = 0
        memset(&var_f8, 0, 0x90)
        sub_140b4c2a0(&var_f8)
        int64_t var_68_1 = 0
        var_f8 = &data_142d6ad48
        void* var_60_1 = arg1 + 0x18
        int64_t var_58_1 = 0
        sub_140b552b0(&var_f8, 1)
        var_f8[0x1b](&var_f8, 0)
        char* rdx_19 = *var_f0
        
        if (&rdx_19[1] u> var_f0[1])
            var_f8[0x2a](&var_f8, &arg_8, 1)
        else
            arg_8 = *rdx_19
            *var_f0 += 1
        
        if (rdi_2 == 0x1f)
            zmm1_1 = sub_140a1d9d0(&var_f8, &var_108, sub_140b63b70(&arg_18, &var_108))
            uint64_t rcx_39 = var_108
            
            if (rcx_39 != 0)
                zmm1_1 = sub_140a74f90(rcx_39)
        
        sub_140a1d9d0(&var_f8, &var_118, zmm1_1)
    else
        uint32_t rdx_5 = zx.d(r12_2.b)
        arg_10.b = rdx_5.b
        
        if (*(arg1 + 0x24) != rdx_5 + 2)
            sub_1405c5510(arg1 + 0x18, rdx_5 + 2)
        
        arg_20 = 0
        memset(&var_f8, 0, 0x90)
        sub_140b4c2a0(&var_f8)
        int32_t var_68 = 0
        var_f8 = &data_142d6ad48
        void* var_60 = arg1 + 0x18
        int64_t var_58 = 0
        sub_140b552b0(&var_f8, 1)
        var_f8[0x1b](&var_f8, 0)
        char* rdx_8 = *var_f0
        
        if (&rdx_8[1] u> var_f0[1])
            var_f8[0x2a](&var_f8, &arg_8, 1)
        else
            arg_8 = *rdx_8
            *var_f0 += 1
        
        if (rdi_2 == 0x1f)
            sub_140a1d9d0(&var_f8, &var_108, sub_140b63b70(&arg_18, &var_108))
            uint64_t rcx_23 = var_108
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
        
        char* rdx_12 = *var_f0
        
        if (&rdx_12[1] u> var_f0[1])
            var_f8[0x2a](&var_f8, &arg_10, 1)
        else
            arg_10.b = *rdx_12
            *var_f0 += 1
        
        int32_t rcx_27 = zx.d(arg_10.b) + *(arg1 + 0x20)
        *(arg1 + 0x20) = rcx_27
        
        if (rcx_27 s> *(arg1 + 0x24))
            sub_1405daba0(arg1 + 0x18)
        
        sub_140a246d0(&var_118, sx.q(var_68) + *(arg1 + 0x18))
void** result = sub_140b4cb40(&var_f8)
int16_t* rcx_49 = var_118

if (rcx_49 == 0)
    return result

return sub_140a74f90(rcx_49)
