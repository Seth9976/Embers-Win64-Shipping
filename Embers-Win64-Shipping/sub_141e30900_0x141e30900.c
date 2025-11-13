// 函数: sub_141e30900
// 地址: 0x141e30900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15
int64_t* var_38 = r15
(*(*arg2 + 0x1d8))(arg2, &data_1439a9418)
int64_t rsi = 0
int64_t r12 = 0
int64_t var_58 = 0
int64_t var_50 = 0

if (arg2[0xe] != 0)
    int32_t rax_3
    
    if (&var_58 == arg1 + 0x98)
        rax_3 = *(arg1 + 0xa4)
    else
        r12 = *(arg1 + 0x98)
        *(arg1 + 0x98) = 0
        var_50.d = *(arg1 + 0xa0)
        var_50:4.d = *(arg1 + 0xa4)
        rax_3 = 0
        var_58 = r12
        *(arg1 + 0xa0) = 0
    
    void* rdi_1 = *(arg1 + 0x98)
    int32_t i_3 = *(arg1 + 0xa0)
    
    if (rax_3 s< 0)
        if (i_3 != 0)
            void* rdi_3 = rdi_1 + 0x18
            int32_t i
            
            do
                int64_t rcx_3 = *(rdi_3 + 0x70)
                
                if (rcx_3 != 0)
                    sub_140a74f90(rcx_3)
                
                sub_140623ed0(rdi_3)
                rdi_3 += 0x98
                i = i_3
                i_3 -= 1
            while (i != 1)
            rax_3 = *(arg1 + 0xa4)
        
        *(arg1 + 0xa0) = 0
        
        if (rax_3 != 0)
            sub_141750570(arg1 + 0x98, 0)
    else
        if (i_3 != 0)
            void* rdi_2 = rdi_1 + 0x18
            int32_t i_1
            
            do
                int64_t rcx_1 = *(rdi_2 + 0x70)
                
                if (rcx_1 != 0)
                    sub_140a74f90(rcx_1)
                
                sub_140623ed0(rdi_2)
                rdi_2 += 0x98
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        *(arg1 + 0xa0) = 0

int512_t zmm1 = sub_141e48450(arg1, arg2)

if (arg2[0xe] != 0 && arg1 + 0x98 != &var_58)
    int32_t i_4 = *(arg1 + 0xa0)
    void* rcx_7 = *(arg1 + 0x98)
    
    if (i_4 != 0)
        void* rdi_4 = rcx_7 + 0x18
        int32_t i_2
        
        do
            int64_t rcx_8 = *(rdi_4 + 0x70)
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            zmm1 = sub_140623ed0(rdi_4)
            rdi_4 += 0x98
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        rcx_7 = *(arg1 + 0x98)
    
    if (rcx_7 != 0)
        zmm1 = sub_140a74f90(rcx_7)
    
    *(arg1 + 0x98) = r12
    *(arg1 + 0xa0) = var_50.d
    *(arg1 + 0xa4) = var_50:4.d
    int64_t var_50_1 = 0
    var_58 = 0

char arg_10
sub_141ff4780(&arg_10, arg2, 0, 0xd6)

if ((arg_10 & 1) == 0)
    sub_141e13360(arg2, arg1 + 0xc0, zmm1)

int32_t rax_6
int512_t zmm1_1
rax_6, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a9418)
int32_t arg_18

if (rax_6 s>= 5)
    int64_t* rdi_5 = arg2[0xe]
    int32_t r14_2 = arg2[6].d & 0x401000
    char rax_12
    
    if (rdi_5 != 0)
        rax_12 = (*(*rdi_5 + 0x98))(rdi_5)
    
    if (rdi_5 == 0 || rax_12 == 0)
        r15.b = 0
    else
        r15.b = 1
    
    char r12_1 = *(arg2 + 0x2a)
    int32_t rdx_8
    
    if (rdi_5 != 0)
        int64_t* rax_13 = sub_142458a60()
        void* rax_14 = rax_13[0x23]
        
        if (rax_14 == 0)
            int64_t rdx_7 = *rax_13
            (*(rdx_7 + 0x390))(rax_13, rdx_7)
            rax_14 = rax_13[0x23]
        
        if (*(rax_14 + 0x56) != 0 && r15.b != 0 && *(arg1 + 0x16d) == 0 && r14_2 == 0)
            goto label_141e30bbb
        
        rdx_8 = 1
    else if (r14_2 != 0)
        rdx_8 = 1
    else
    label_141e30bbb:
        rdx_8 = 0
        
        if (r12_1 s< 0)
            rdx_8 = 1
    
    int64_t* r8_1 = arg2[1]
    int64_t rcx_21 = *r8_1
    bool cond:1_1
    
    if (rcx_21 + 4 u> r8_1[1])
        int64_t rax_17 = *arg2
        arg_18 = rdx_8
        (*(rax_17 + 0x150))(arg2, &arg_18, 4)
        cond:1_1 = arg_18 != 0
    else
        cond:1_1 = *rcx_21 != 0
        *r8_1 = rcx_21 + 4
    
    rdx_8.b = cond:1_1
    
    if (rdx_8.b != 0)
        if (((*(arg1 + 8) u>> 4).b & 1) == 0)
            char var_60_1 = 1
            sub_141e0c0a0(arg1 + 0xe0, arg2, 0, arg1, zmm1_1, *(arg1 + 0x38), *(arg1 + 0xd0), 
                (*(arg1 + 0xd8)).b)
        
        int64_t* rcx_24 = arg2[1]
        int32_t* rdx_11 = *rcx_24
        
        if (&rdx_11[1] u> rcx_24[1])
            int64_t rax_25 = *arg2
            rsi.b = *(arg1 + 0x198) != 0
            arg_18 = rsi.d
            (*(rax_25 + 0x150))(arg2, &arg_18, 4)
            *(arg1 + 0x198) = arg_18 != 0
        else
            void* rax_23
            rax_23.b = *rdx_11 != 0
            *(arg1 + 0x198) = rax_23.b
            int64_t* rax_24 = arg2[1]
            *rax_24 += 4
else
    int64_t* rcx_13 = arg2[1]
    int32_t* rdx_3 = *rcx_13
    
    if (&rdx_3[1] u> rcx_13[1])
        int32_t* rdx_4 = &arg_18
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_4, zmm1_1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_4, 4)
    else
        arg_18 = *rdx_3
        *rcx_13 += 4
    
    int32_t rcx_16 = arg_18
    int64_t var_48 = 0
    int32_t var_3c_1 = 0
    int32_t var_40_1 = rcx_16
    
    if (rcx_16 s> 0)
        sub_1405daba0(&var_48)
        rcx_16 = arg_18
        rsi = var_48
    
    (*(*arg2 + 0x150))(arg2, rsi, sx.q(rcx_16))
    
    if (rsi != 0)
        sub_140a74f90(rsi)
return sub_141e13180(&var_58)
