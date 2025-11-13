// 函数: sub_142800800
// 地址: 0x142800800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg4
uint64_t r15
r15.b = (*(*arg2 + 0x68))(arg2, 0) != 0xffff
char arg_10 = r15.b
int32_t rax_3 = (*(*arg2 + 0x28))(arg2)
int64_t rdx = *arg2
int64_t* rax_4 = (*(rdx + 0x30))(arg2, rdx)
uint8_t var_1c8

if (rax_3 != 0 && rax_4 != 0)
    int32_t rbx_1 = 0
    
    if (rax_3 != 0)
        int64_t* rsi_1 = rax_4
        
        do
            char const* const rdx_1
            int64_t r8
            
            if (rbx_1 == 0 || (rbx_1.b & 1) != 0)
                r8 = 1
                rdx_1 = &data_1434cf410
            else
                r8 = 4
                rdx_1 = "\n\t\t\t"
            
            (**arg5)(arg5, rdx_1, r8)
            sub_1427e39a0(arg5, rsi_1)
            rbx_1 += 1
            rsi_1 += 0xc
        while (rbx_1 u< rax_3)
        
        rsi = arg4
    
    int64_t rax_6 = *arg5
    var_1c8 = 0
    (*rax_6)(arg5, &var_1c8, 1)
    (*(*rsi + 0x10))(rsi, "Points", arg5[4])
    arg5[3] = 0

uint8_t rbx_2 = *(*(*arg2 + 0x58))(arg2, &var_1c8)
int64_t rax_10 = *arg2
rbx_2 = rbx_2 u>> 1 & 1
var_1c8 = rbx_2
int32_t rax_11 = (*(rax_10 + 0x48))(arg2)
int64_t rdx_5 = *arg2
uint64_t r14_1 = zx.q(rax_11)
void* rax_12 = (*(rdx_5 + 0x50))(arg2, rdx_5)

if (rbx_2 == 0)
    if (r14_1.d != 0 && rax_12 != 0)
        int32_t i = 0
        
        if (r14_1.d == 0)
            goto label_142800acf
        
        void* r15_2 = rax_12 + 8
        
        do
            char const* const rdx_10
            int64_t r8_3
            
            if (i == 0 || (i.b & 1) != 0)
                r8_3 = 1
                rdx_10 = &data_1434cf410
            else
                r8_3 = 4
                rdx_10 = "\n\t\t\t"
            
            (**arg5)(arg5, rdx_10, r8_3)
            *(r15_2 - 8)
            int64_t* rax_17 = sub_1427e3ab0(arg5)
            int64_t r9_2 = *rax_17
            (*r9_2)(rax_17, &data_1434cf410, 1, r9_2)
            *(r15_2 - 4)
            int64_t* rax_18 = sub_1427e3ab0(rax_17)
            int64_t r9_3 = *rax_18
            (*r9_3)(rax_18, &data_1434cf410, 1, r9_3)
            *r15_2
            sub_1427e3ab0(rax_18)
            i += 1
            r15_2 += 0xc
        while (i u< r14_1.d)
        
    label_142800ac2:
        rbx_2 = var_1c8
        r15 = zx.q(arg_10)
    label_142800acf:
        int64_t rax_19 = *arg5
        var_1c8 = 0
        (*rax_19)(arg5, &var_1c8, 1)
        rsi = arg4
        (*(*rsi + 0x10))(rsi, "Triangles", arg5[4])
        arg5[3] = 0
else if (r14_1.d != 0 && rax_12 != 0)
    int32_t i_1 = 0
    
    if (r14_1.d == 0)
        goto label_142800acf
    
    void* r15_1 = rax_12 + 4
    
    do
        char const* const rdx_6
        int64_t r8_2
        
        if (i_1 == 0 || (i_1.b & 1) != 0)
            r8_2 = 1
            rdx_6 = &data_1434cf410
        else
            r8_2 = 4
            rdx_6 = "\n\t\t\t"
        
        (**arg5)(arg5, rdx_6, r8_2)
        *(r15_1 - 4)
        int64_t* rax_14 = sub_1428071f0(arg5)
        int64_t r9 = *rax_14
        (*r9)(rax_14, &data_1434cf410, 1, r9)
        *(r15_1 - 2)
        int64_t* rax_15 = sub_1428071f0(rax_14)
        int64_t r9_1 = *rax_15
        (*r9_1)(rax_15, &data_1434cf410, 1, r9_1)
        *r15_1
        sub_1428071f0(rax_15)
        i_1 += 1
        r15_1 += 6
    while (i_1 u< r14_1.d)
    
    goto label_142800ac2

uint64_t (* var_1e8)(int64_t* arg1)
int32_t var_1e0
char const* const var_1d8
int64_t (* var_1d0)(int64_t* arg1, int32_t* arg2)

if (r15.b != 0)
    var_1d0 = sub_142806ea0
    var_1d8 = "materialIndices"
    var_1e0 = r14_1.d
    var_1e8 = sub_142804160
    sub_142806db0(rsi, arg5, 6, arg2, sub_142804160, var_1e0, "materialIndices", sub_142806ea0)

int32_t var_1c0 = 0
int16_t* r15_3 = nullptr
int64_t var_1b8 = 0
int64_t var_178 = 0.q
int32_t var_1a8 = 0
int64_t var_1a0 = 0
var_178.d = rax_3
int64_t var_160 = 0.q
int32_t var_150 = 0
int16_t* var_148 = nullptr
int16_t var_158 = 0
var_160.d = r14_1.d
int128_t var_188 = var_1c0.o
var_188:8.q = rax_4
var_188.d = 0xc
int128_t var_170 = var_1a8.o
var_170:8.q = rax_12

if (rbx_2 == 0)
    var_170.d = 0xc
else
    var_170.d = 6
    int16_t var_158_1 = 2

if (arg_10 != 0)
    int64_t rax_23 = 2 * r14_1
    
    if (mulu.dp.q(2, r14_1) u>> 0x40 != zx.o(0))
        rax_23 = -1
    
    int16_t* rax_24 = j_sub_140a82f30(rax_23)
    r15_3 = rax_24
    int32_t i_2 = 0
    
    if (r14_1.d != 0)
        int16_t* rsi_2 = rax_24
        
        do
            int16_t rax_26 = (*(*arg2 + 0x68))(arg2, zx.q(i_2))
            i_2 += 1
            *rsi_2 = rax_26
            rsi_2 = &rsi_2[1]
        while (i_2 u< r14_1.d)
    
    var_148 = r15_3
    int32_t var_150_1 = 2

void* arg_30
void* rbx_7 = arg_30

if (*(rbx_7 + 8) != 0)
    int64_t var_110_1 = 0
    int128_t var_f8
    __builtin_memset(&var_f8, 0, 0x28)
    int64_t var_128 = *(arg1 + 8)
    int64_t* var_120 = &var_128
    int64_t* var_118_1 = &var_128
    int64_t* var_100 = &var_128
    int32_t var_d0_1 = 0x3f400000
    int64_t var_108_1 = 0
    int32_t var_cc_1 = 0xffffffff
    int64_t var_c8_1 = 0
    sub_142809d10(&var_100, 0x40)
    int64_t* rcx_28 = *(rbx_7 + 8)
    int32_t var_1b0
    var_1b0.q = &var_128
    int32_t var_c0_1 = 0x20
    var_1c0.q = &data_1434d1d90
    void** const var_1b8_1 = &data_1434d1da0
    __builtin_memset(&var_1a8, 0, 0x14)
    (*(*rcx_28 + 0x20))(rcx_28, &var_188, &var_1c0, 0, var_1e8, var_1e0, var_1d8, var_1d0)
    int32_t r14_2 = var_1a8
    char* var_1a0_1
    char* rsi_3 = var_1a0_1
    
    if (r14_2 != 0 && rsi_3 != 0)
        int32_t rbx_8 = 0
        
        if (r14_2 != 0)
            do
                char const* const rdx_18
                int64_t r8_6
                
                if (rbx_8 == 0 || (rbx_8.b & 0xf) != 0)
                    r8_6 = 1
                    rdx_18 = &data_1434cf410
                else
                    r8_6 = 4
                    rdx_18 = "\n\t\t\t"
                
                (**arg5)(arg5, rdx_18, r8_6)
                char var_b8[0x80]
                memset(&var_b8, 0, 0x80)
                physx::shdfnd::snprintf(&var_b8, 0x80, "%u")
                
                if (var_b8[0] != 0)
                    int64_t r8_7 = -1
                    
                    do
                        r8_7 += 1
                    while (var_b8[r8_7] != 0)
                    
                    (**arg5)(arg5, &var_b8, r8_7)
                
                rbx_8 += 1
                rsi_3 = &rsi_3[1]
            while (rbx_8 u< r14_2)
        
        arg_30.b = 0
        (**arg5)(arg5, &arg_30, 1)
        (*(*arg4 + 0x10))(arg4, "CookedData", arg5[4])
        rsi_3 = var_1a0_1
        arg5[3] = 0
    
    var_1c0.q = &data_1434d1d90
    void** const var_1b8_2 = &data_1434d1da0
    
    if (rsi_3 != 0)
        sub_142807300(var_1b0.q + 8, &rsi_3[-0x10], *(rsi_3 - 8))
    
    void** const var_1b8_3 = &data_142d40888
    var_1c0.q = &data_142d40888
    sub_142807120(&var_120)
    r15_3 = var_148

return j_sub_140a74f90(r15_3)
