// 函数: sub_141e08040
// 地址: 0x141e08040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[4]

if (rdi != 0)
    void* rax_1 = sub_142591550()
    void* rdx = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        uint32_t rax_4
        void* r8
        
        if (data_143de5480 != 0)
            rax_4, r8 = GetCurrentThreadId()
            rax_4.b = rax_4 == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            r8.b = 1
            sub_141f3e990(arg1[4], 1, r8.b)

int64_t* rdi_1 = arg1[0x48]

if (rdi_1 == 0)
    int64_t* rax_6 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_6
    rdi_1 = rax_6

int32_t rbx_1 = 0
arg5[2] = &rdi_1[0x94]
int32_t rdx_1 = 0
int32_t r15 = rdi_1[0x95].d
int32_t rax_8 = *(arg5 + 0xc)

if (r15 s> rax_8)
    arg5[1].d = 0
    
    if (rax_8 != r15)
        sub_141acba60(arg5, r15)
        rdx_1 = arg5[1].d

int32_t rax_9 = rdx_1 + r15
arg5[1].d = rax_9

if (rax_9 s> *(arg5 + 0xc))
    sub_141acb8e0(arg5, rdx_1)

char arg_10 = 0
char* var_30 = &arg_10
void*** (* var_38)() = j_sub_140597fc0
int64_t* rax_11 = sub_140a756e0(&var_38, &data_143958018) + 0x10
int64_t* var_b8 = rax_11
int64_t rcx_6 = *rax_11
int64_t rcx_7 = rax_11[2]
char var_a0 = 0
int64_t* result_2 = rax_11[3]
rax_11[3] = &var_b8
int64_t* rax_12 = var_b8
rax_12[4].d += 1
int64_t* result

if (arg2 != 0)
    result = sub_141e0ba30(arg5)
else
    void var_88
    sub_140dd5b90(&var_88, rdi_1)
    int64_t var_80
    __builtin_memset(&var_80, 0, 0x24)
    int64_t var_58_1 = 0
    int16_t var_50_1 = 0
    char var_4e_1 = arg2
    int256_t zmm1_1 = sub_141e295c0(&var_88)
    int64_t* rcx_10 = &var_80
    int256_t zmm1_2
    
    if (arg2 == arg2)
        zmm1_2 = sub_141e0ba30(rcx_10)
    else
        zmm1_2 = sub_141e47c50(rcx_10, zmm1_1)
    
    int64_t* r15_1 = rdi_1[0x1b]
    (*(*rdi_1 + 0x60))(rdi_1)
    
    if ((*(*rdi_1 + 0x78))(rdi_1, &var_88, r15_1) == 0)
        if (r15_1 == 0)
            int64_t* rcx_14 = &var_80
            
            if (arg2 == 0)
                sub_141e0ba30(rcx_14)
            else
                sub_141e47c50(rcx_14, zmm1_2)
        else
            if (r15_1 == rdi_1[0x1b])
                rdi_1[0x86].w += 1
                bool cond:1_1 = rdi_1[0x86].w != 0xffff
                rdi_1[0x85] = data_143de5458
                
                if (not(cond:1_1))
                    rdi_1[0x86].w = 0
            
            (*(*r15_1 + 0x18))(r15_1, &var_88)
    
    arg4[2] = var_58_1
    arg4[1].d = 0
    
    if (*(arg4 + 0xc) s<= 0xffffffff)
        sub_1405c5570(arg4, 0)
    
    int32_t var_60
    int64_t rdi_2 = sx.q(var_60)
    
    if (rdi_2.d != 0)
        int32_t rax_19 = arg4[1].d
        int32_t rdx_7 = rdi_2.d + rax_19
        
        if (rdx_7 s> *(arg4 + 0xc))
            sub_1405c5570(arg4, rdx_7)
            rax_19 = arg4[1].d
        
        int64_t var_68
        memcpy(*arg4 + (sx.q(rax_19) << 3), var_68, (rdi_2 << 3).d)
        arg4[1].d += rdi_2.d
    
    int64_t* rcx_19 = arg4[2]
    
    if (rcx_19 != 0)
        int64_t i_1 = sx.q(rcx_19[1].d)
        
        if (i_1 s> 0)
            int64_t rcx_20 = *rcx_19
            int64_t i
            
            do
                bool cond:2_1 = *rcx_20 == 0xffff
                int32_t rax_21 = rbx_1 + 1
                rcx_20 += 2
                
                if (cond:2_1)
                    rax_21 = rbx_1
                
                rbx_1 = rax_21
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    result = &var_80
    arg4[3].w = rbx_1.w
    *(arg4 + 0x1a) = 1
    
    if (arg5 != &var_80)
        sub_141a911c0(arg5, &var_80)
        int64_t* result_1
        result = result_1
        arg5[2] = result

if (var_a0 == 0)
    int64_t* rax_22 = var_b8
    char var_a0_1 = 1
    rax_22[4].d -= 1
    int64_t* rcx_23 = var_b8
    
    if (rcx_7 != rcx_23[2])
        sub_140b16b40(rcx_23, rcx_7)
        rcx_23 = var_b8
    
    *rcx_23 = rcx_6
    result = result_2
    var_b8[3] = result

return result
