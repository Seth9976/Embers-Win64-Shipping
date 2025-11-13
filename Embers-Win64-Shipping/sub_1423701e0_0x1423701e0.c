// 函数: sub_1423701e0
// 地址: 0x1423701e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t rdi = 0
int64_t rbp = arg3
void* const rcx_3

if (*(arg4 + 0x668) == *(arg4 + 0x694))
label_142370270:
    rcx_3 = nullptr
else
    void* r9 = *(arg4 + 0x6a0)
    void* r10_1 = arg4 + 0x698
    
    if (r9 != 0)
        r10_1 = r9
    
    int32_t rax_5 =
        *(r10_1 + ((sx.q((arg3 u>> 0x20).d * 0x17 + rbp.d) & (sx.q(*(arg4 + 0x6a8)) - 1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_142370270_1:
        rcx_3 = nullptr
    else
        int64_t r8 = *(arg4 + 0x660)
        
        while (true)
            int64_t rdx_2 = sx.q(rax_5) * 3
            rcx_3 = r8 + (rdx_2 << 3)
            
            if (*(r8 + (rdx_2 << 3)) == rbp)
                break
            
            rax_5 = *(rcx_3 + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_142370270_2
        
        if (rax_5 == 0xffffffff)
        label_142370270_2:
            rcx_3 = nullptr

void* rax_6 = rcx_3 + 8

if (rcx_3 == 0)
    rax_6 = nullptr

uint64_t result
int32_t rcx_6
int32_t* rdx_5
int32_t* r14_2

if (rax_6 != 0)
    int64_t rcx_7 = sx.q(*rax_6)
    rdx_5 = *(arg4 + 0x6b0)
    result = zx.q((rcx_7 + 4).d)
    r14_2 = rdx_5 + rcx_7
    rcx_6 = *(rdx_5 + rcx_7)
else
    int64_t rbp_1 = sx.q(*(arg4 + 0x6b8))
    int32_t rax_7 = (rbp_1 + 8).d
    *(arg4 + 0x6b8) = rax_7
    
    if (rax_7 s> *(arg4 + 0x6bc))
        sub_1405daba0(arg4 + 0x6b0)
    
    int32_t arg_8 = rbp_1.d
    *(rbp_1 + *(arg4 + 0x6b0)) = 0
    sub_141cf16a0(arg4 + 0x660, &arg_18, &arg_8)
    int64_t rax_10 = sx.q(arg_8)
    rcx_6 = 1
    rbp = arg_18
    r14_2 = rax_10 + *(arg4 + 0x6b0)
    result = zx.q(rax_10.d + 4)
    *r14_2 = 1
    rdx_5 = *(arg4 + 0x6b0)

void* rsi_2 = sx.q(result.d) + rdx_5

if (rcx_6 != 0)
    if (data_143f59384 != 0)
        rdx_5.b = 1
        (*(*arg1 + 0x2d8))(arg1, rdx_5)
    
    result = sub_14235b790(arg1)
    *rsi_2 = result.d
    *r14_2 = 0

if ((arg1[0xe].b & 4) != 0)
    result = zx.q(arg1[0xc].d)
    
    if (result.d s> 0 && arg1[0xd].d s>= result.d)
        if (result.d s> 0)
            char* rdx_7 = nullptr
            int32_t result_1
            
            do
                result_1 = result.d
                
                if (result.d s> *rsi_2)
                    rdx_7[arg1[0xb]] = 0
                    result_1 = arg1[0xc].d
                
                rdi += 1
                rdx_7 = &rdx_7[1]
                result = zx.q(result_1)
            while (rdi s< result_1)
        
        result = arg1[0xb]
        *(sx.q(*rsi_2) + result) = 1
        arg1[0xd].d = 1

int64_t r8_2 = sx.q(*rsi_2)

if (r8_2.d s< arg1[6].d)
    result = arg1[5]
    int64_t* rdi_1 = *(result + (r8_2 << 3))
    
    if (rdi_1 != 0)
        return (*(*rdi_1 + 0x298))(rdi_1, arg2, sub_142365fb0(rbp, rdi_1, r8_2.d), arg4, arg5, arg6)

return result
