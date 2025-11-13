// 函数: sub_14200f170
// 地址: 0x14200f170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[8].d s< 0x144)
    int64_t rax
    rax.b = 0
    return rax

void* rbx
void* arg_8 = rbx
(*(*arg2 + 0x1d8))(arg2, &data_1439a9418)
int32_t rax_2
int512_t zmm1
rax_2, zmm1 = sub_140b4e7c0(arg2, &data_1439a9418)
int64_t* arg_10

if (rax_2 s< 0x1f)
    uint64_t var_38 = 0
    int32_t var_30_1 = 0
    sub_140a1d9d0(arg2, &var_38, zmm1)
    rbx = &data_142d40450
    int16_t* rdx_4 = &data_142d40450
    
    if (var_30_1 != 0)
        rdx_4 = var_38
    
    int512_t zmm1_1 = sub_140b58260(&arg_10, rdx_4, 1)
    *arg1 = arg_10
    uint64_t var_48 = 0
    int32_t var_40_1 = 0
    sub_140a1d9d0(arg2, &var_48, zmm1_1)
    
    if (var_40_1 != 0)
        rbx = var_48
    
    sub_140b58260(&arg_10, rbx, 1)
    uint64_t rcx_7 = var_48
    arg1[1] = arg_10
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    uint64_t rcx_8 = var_38
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
else
    (*(*arg2 + 0x140))(arg2, arg1)
    (*(*arg2 + 0x140))(arg2, &arg1[1])

if (arg2[8].d s< 0x202)
    if (sub_140b5b9d0(arg1, u"asset") == 0)
        if (sub_140b5b9d0(arg1, u"assetclass") != 0)
            sub_140b58260(&arg_10, u"softclass", 1)
            *arg1 = arg_10
    else
        sub_140b58260(&arg_10, u"softobject", 1)
        *arg1 = arg_10

char rax_10 = *(arg2 + 0x2a)

if ((rax_10 & 0x20) == 0 || (rax_10 & 0x40) != 0 || arg2[5].b s< 0)
    arg_10 = sub_140d3c740(&arg1[2], 1)
    (*(*arg2 + 0x130))(arg2, &arg_10)
    
    if ((arg2[5].b & 1) != 0 || (*(arg2 + 0x2a) & 0x40) != 0)
        sub_140d3a3a0(&arg1[2], arg_10)

int64_t r14
int64_t var_20 = r14
int32_t rax_13
int512_t zmm1_2
rax_13, zmm1_2 = sub_140b4e7c0(arg2, &data_1439a9418)

if (rax_13 s< 0x1a)
    rbx.b = 0
    r14.b = 0
    (*(*arg2 + 0x1d8))(arg2, &data_1439a93c8)
    int32_t rax_19
    rax_19, zmm1_2 = sub_140b4e7c0(arg2, &data_1439a93c8)
    
    if (rax_19 s>= 6)
        int64_t* rcx_21 = arg2[1]
        int64_t rdx_13 = *rcx_21
        bool cond:4_1
        
        if (rdx_13 + 4 u> rcx_21[1])
            arg_10.d = 0
            (*(*arg2 + 0x150))(arg2, &arg_10, 4)
            cond:4_1 = arg_10.d != 0
        else
            cond:4_1 = *rdx_13 != 0
            *rcx_21 = rdx_13 + 4
        
        rbx.b = cond:4_1
        
        if (rbx.b != 0)
            zmm1_2 = sub_141ff7420(arg2, &arg1[7])
        
        int64_t* rcx_24 = arg2[1]
        int64_t rdx_16 = *rcx_24
        bool cond:7_1
        
        if (rdx_16 + 4 u> rcx_24[1])
            arg_10.d = 0
            (*(*arg2 + 0x150))(arg2, &arg_10, 4)
            cond:7_1 = arg_10.d != 0
        else
            cond:7_1 = *rdx_16 != 0
            *rcx_24 = rdx_16 + 4
        
        r14.b = cond:7_1
    
    int64_t* rcx_26 = arg2[1]
    int64_t rdx_18 = *rcx_26
    bool cond:3_1
    
    if (rdx_18 + 4 u> rcx_26[1])
        arg_10.d = 0
        (*(*arg2 + 0x150))(arg2, &arg_10, 4)
        cond:3_1 = arg_10.d != 0
    else
        cond:3_1 = *rdx_18 != 0
        *rcx_26 = rdx_18 + 4
    
    if ((arg2[5].b & 1) != 0)
        int64_t rax_27
        rax_27.b = 0
        
        if (cond:3_1 != 0)
            rax_27.b = 1
        else if (r14.b == 0)
            rax_27 = 0
            
            if (rbx.b != 0)
                rax_27 = 3
        else
            rax_27.b = 2
        
        *(arg1 + 0x54) = rax_27.b
else
    int64_t* rcx_16 = arg2[1]
    char* rdx_10 = *rcx_16
    
    if (&rdx_10[1] u> rcx_16[1])
        (*(*arg2 + 0x150))(arg2, arg1 + 0x54, 1)
    else
        *(arg1 + 0x54) = *rdx_10
        int64_t* rax_16 = arg2[1]
        *rax_16 += 1
    
    if (*(arg1 + 0x54) == 3)
        zmm1_2 = sub_141ff7420(arg2, &arg1[7])

int64_t* rcx_28 = arg2[1]
char rbx_2 = *(arg1 + 0x55)
int64_t rdx_20 = *rcx_28
bool cond:5

if (rdx_20 + 4 u> rcx_28[1])
    arg_10.d = zx.d(rbx_2) u>> 1 & 1
    (*(*arg2 + 0x150))(arg2, &arg_10, 4)
    cond:5 = arg_10.d != 0
else
    cond:5 = *rdx_20 != 0
    *rcx_28 = rdx_20 + 4

int64_t* rcx_30 = arg2[1]
r14.b = cond:5
int64_t rdx_22 = *rcx_30
bool cond:8

if (rdx_22 + 4 u> rcx_30[1])
    arg_10.d = zx.d(rbx_2) u>> 3 & 1
    (*(*arg2 + 0x150))(arg2, &arg_10, 4)
    cond:8 = arg_10.d != 0
else
    cond:8 = *rdx_22 != 0
    *rcx_30 = rdx_22 + 4

int64_t* rax_43

if (arg2[8].d s< 0x163)
    rax_43 = zx.q(arg2[5].b)
    
    if ((rax_43.b & 1) != 0 && rax_43.b s< 0)
        char rax_44 = sub_140b5b9d0(arg1, u"delegate")
        
        if (rax_44 == 0)
            rax_43 = sub_140b5b9d0(arg1, u"mcdelegate")
        
        if (rax_44 != 0 || rax_43.b != 0)
            rax_43 = sub_140d3c6e0(&arg1[2])
            
            if (rax_43 != 0)
                void* rax_45 = sub_140bdfab0()
                void* rcx_38 = rax_43[2]
                int64_t rdx_27 = sx.q(*(rax_45 + 0x38))
                
                if (rdx_27.d s<= *(rcx_38 + 0x38)
                        && *(*(rcx_38 + 0x30) + (rdx_27 << 3)) == rax_45 + 0x30)
                    arg1[4] = rax_43[3]
                    arg1[3] = sub_140bdf0a0(rax_43)
                    sub_140d3a3a0(&arg_10, nullptr)
                    arg1[2] = arg_10
else
    (*(*arg2 + 0x130))(arg2, &arg1[3])
    (*(*arg2 + 0x140))(arg2, &arg1[4])
    sub_1409ac860(arg2, &arg1[5], zmm1_2)

uint8_t rcx_42 = *(arg1 + 0x55) u>> 2 & 1

if (arg2[8].d s>= 0x1c8)
    int64_t* r8_2 = arg2[1]
    void* rdx_28 = *r8_2
    bool cond:9_1
    
    if (rdx_28 + 4 u> r8_2[1])
        arg_10.d = zx.d(rcx_42)
        (*(*arg2 + 0x150))(arg2, &arg_10, 4)
        cond:9_1 = arg_10.d != 0
    else
        cond:9_1 = *rdx_28 != 0
        *r8_2 = rdx_28 + 4
    
    rcx_42 = cond:9_1

if ((arg2[5].b & 1) != 0)
    *(arg1 + 0x55) &= 0xf5
    r14.b &= 0xf9
    r14.b |= rcx_42 * 2
    r14.b *= 2
    r14.b |= (cond:8 << 3 | *(arg1 + 0x55)) & 0xfb
    *(arg1 + 0x55) = r14.b

rax_43.b = 1
return rax_43
