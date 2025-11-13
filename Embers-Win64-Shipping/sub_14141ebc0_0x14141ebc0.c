// 函数: sub_14141ebc0
// 地址: 0x14141ebc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == 0)
    return 

char arg_8
char* var_70_1 = &arg_8
void*** (* var_78)() = j_sub_140597fc0
arg_8 = 0
int64_t* rax_2 = sub_140a756e0(&var_78, &data_143958018) + 0x10
int64_t* var_68 = rax_2
int32_t rdx = 0
int64_t rcx_1 = *rax_2
int64_t rcx_2 = rax_2[2]
char var_50_1 = 0
void*** (* rcx_3)() = rax_2[3]
rax_2[3] = &var_68
int64_t* rax_3 = var_68
rax_3[4].d += 1
int64_t i_4 = sx.q(arg1[1].d)
var_78 = data_1439b6d20
arg_8.d = 0
int64_t i_2 = i_4

if (i_4.d s> 0)
    int32_t r8_1 = (i_4 - 1).d
    int64_t r13_1 = 0
    int32_t arg_18 = r8_1
    int64_t i
    
    do
        int64_t rcx_4 = *arg1
        int64_t* rax_4 = *(rcx_4 + r13_1 + 8)
        int64_t r12_1
        
        if (rax_4 == 0)
            r12_1 = 0
        else
            r12_1 = *rax_4
        
        int32_t r15_1 = *(rcx_4 + r13_1 + 0x20)
        int64_t rbp_1 = *(*(rcx_4 + r13_1 + 0x18) + 0x10)
        uint64_t rsi_1
        
        if (rdx == r8_1)
            rsi_1 = zx.q(*(arg1 + 0x1c))
        else
            rsi_1 = zx.q(arg1[3].d)
        
        void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_6 = &rcx_7[3]
        
        if (rax_6 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_6 = &rcx_7[3]
        
        *(arg2 + 0x30) = rax_6
        int64_t* rax_7 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_7 = rcx_7
        *(arg2 + 8) = &rcx_7[1]
        rcx_7[1] = 0
        *rcx_7 = &data_142f7e230
        rcx_7[2] = r12_1
        void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_9 = &rcx_13[5]
        
        if (rax_9 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_9 = &rcx_13[5]
        
        *(arg2 + 0x30) = rax_9
        int64_t* rax_10 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_10 = rcx_13
        *(arg2 + 8) = &rcx_13[1]
        rcx_13[3] = rbp_1
        rcx_13[4].d = r15_1
        void*** (* r15_2)() = var_78
        rcx_13[1] = 0
        *rcx_13 = &data_142d56618
        rcx_13[2].d = 0
        
        if (r15_2 == 0)
            sub_140af98a0("Unknown", 0xbc8, 
                Tried to call DrawIndexedPrimitive with null IndexBuffer!", 0)
            sub_140afbb40()
        
        void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_12 = &rcx_19[6]
        
        if (rax_12 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_12 = &rcx_19[6]
        
        *(arg2 + 0x30) = rax_12
        void** rax_13 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_13 = rcx_19
        *(arg2 + 8) = &rcx_19[1]
        rcx_19[1] = 0
        *rcx_19 = &data_142f11598
        rcx_19[2] = r15_2
        rcx_19[3] = 0
        rcx_19[4].d = (rsi_1 << 3).d
        *(rcx_19 + 0x24) = 0
        rcx_19[5].d = (rsi_1 * 3).d << 2
        *(rcx_19 + 0x2c) = 1
        void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_15 = &rcx_25[3]
        
        if (rax_15 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_15 = &rcx_25[3]
        
        r8_1 = arg_18
        r13_1 += 0x28
        *(arg2 + 0x30) = rax_15
        int64_t* rax_16 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        rdx = arg_8.d + 1
        i = i_2
        i_2 -= 1
        *rax_16 = rcx_25
        *(arg2 + 8) = &rcx_25[1]
        rcx_25[1] = 0
        *rcx_25 = &data_142f284f8
        rcx_25[2] = r12_1
        arg_8.d = rdx
    while (i != 1)
    i_4 = zx.q(arg1[1].d)

int64_t* rbx_1 = *arg1
int32_t i_3 = i_4.d

if (i_4.d != 0)
    int32_t i_1
    
    do
        sub_1413de930(rbx_1)
        rbx_1 = &rbx_1[5]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != i_4.d)
    sub_141105150(arg1, i_4.d)

arg1[2] = 0

if (var_50_1 != 0)
    return 

int64_t* rax_18 = var_68
char var_50_2 = 1
rax_18[4].d -= 1
int64_t* rcx_31 = var_68

if (rcx_2 != rcx_31[2])
    sub_140b16b40(rcx_31, rcx_2)
    rcx_31 = var_68

*rcx_31 = rcx_1
var_68[3] = rcx_3
