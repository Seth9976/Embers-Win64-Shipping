// 函数: sub_14236f6a0
// 地址: 0x14236f6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t i = 0
void* r12 = arg4
void* r14 = arg1
void* const rcx_3

if (*(arg4 + 0x668) == *(arg4 + 0x694))
label_14236f740:
    rcx_3 = nullptr
else
    void* r8 = *(arg4 + 0x6a0)
    void* r9 = arg4 + 0x698
    
    if (r8 != 0)
        r9 = r8
    
    int32_t rax_5 =
        *(r9 + ((sx.q((arg3 u>> 0x20).d * 0x17 + arg3.d) & (sx.q(*(arg4 + 0x6a8)) - 1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_14236f740_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(arg4 + 0x660)
        
        while (true)
            int64_t rdx_2 = sx.q(rax_5) * 3
            rcx_3 = r8_1 + (rdx_2 << 3)
            
            if (*(r8_1 + (rdx_2 << 3)) == arg3)
                break
            
            rax_5 = *(rcx_3 + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_14236f740_2
        
        if (rax_5 == 0xffffffff)
        label_14236f740_2:
            rcx_3 = nullptr

void* rax_6 = rcx_3 + 8

if (rcx_3 == 0)
    rax_6 = nullptr

void* var_78
uint64_t result
int32_t rcx_6
int32_t* rdx_6
int32_t* r8_3

if (rax_6 != 0)
    int64_t rcx_7 = sx.q(*rax_6)
    r8_3 = *(r12 + 0x6b0)
    result = zx.q((rcx_7 + 4).d)
    rdx_6 = r8_3 + rcx_7
    rcx_6 = *(r8_3 + rcx_7)
else
    int64_t r15_1 = sx.q(*(r12 + 0x6b8))
    int32_t rax_7 = (r15_1 + 8).d
    *(r12 + 0x6b8) = rax_7
    
    if (rax_7 s> *(r12 + 0x6bc))
        sub_1405daba0(r12 + 0x6b0)
    
    var_78.d = r15_1.d
    *(r15_1 + *(r12 + 0x6b0)) = 0
    sub_141cf16a0(arg4 + 0x660, &arg_18, &var_78)
    int64_t rax_10 = sx.q(var_78.d)
    rcx_6 = 1
    rdx_6 = rax_10 + *(r12 + 0x6b0)
    result = zx.q(rax_10.d + 4)
    *rdx_6 = 1
    r8_3 = *(r12 + 0x6b0)

void* r13_1 = sx.q(result.d) + r8_3
var_78 = r13_1

if (rcx_6 != 0)
    *rdx_6 = 0
    int32_t* r12_1 = nullptr
    int32_t rax_11 = *(r14 + 0x30)
    int32_t rsi_1 = 0
    int32_t* var_70 = nullptr
    int64_t var_68_1 = 0
    
    if (rax_11 != 0)
        sub_1405dadb0(&var_70, rax_11)
        rax_11 = *(r14 + 0x30)
        rsi_1 = var_68_1.d
        r12_1 = var_70
    
    int32_t* var_60 = nullptr
    int32_t* r15_2 = nullptr
    int64_t var_58_1 = 0
    int32_t rdi_1 = 0
    
    if (rax_11 != 0)
        sub_1405dadb0(&var_60, rax_11)
        rdi_1 = var_58_1.d
        r15_2 = var_60
        
        if (*(r14 + 0x30) s> 0)
            int64_t r13_2 = 0
            
            do
                void* rcx_10 = *(*(r14 + 0x28) + r13_2)
                
                if (rcx_10 != 0)
                    int32_t rax_14 = sub_142365850(rcx_10)
                    
                    if (rax_14 == 1)
                        int64_t r14_1 = sx.q(rsi_1)
                        rsi_1 = (r14_1 + 1).d
                        var_68_1.d = rsi_1
                        
                        if (rsi_1 s> var_68_1:4.d)
                            sub_1405a4cf0(&var_70)
                            rsi_1 = var_68_1.d
                            r12_1 = var_70
                        
                        r12_1[r14_1] = i
                        r14 = arg1
                    else if (rax_14 == 2)
                        int64_t r14_2 = sx.q(rdi_1)
                        rdi_1 = (r14_2 + 1).d
                        var_58_1.d = rdi_1
                        
                        if (rdi_1 s> var_58_1:4.d)
                            sub_1405a4cf0(&var_60)
                            rdi_1 = var_58_1.d
                            r15_2 = var_60
                        
                        r15_2[r14_2] = i
                        r14 = arg1
                
                i += 1
                r13_2 += 8
            while (i s< *(r14 + 0x30))
            
            r13_1 = var_78
    
    *r13_1 = 0xffffffff
    result = data_143f5b298
    
    if ((*(result + 0x8e4) & 1) != 0 && rsi_1 s> 0)
        result = zx.q(*r12_1)
        *r13_1 = result.d
    else if (rdi_1 s> 0)
        result = zx.q(*r15_2)
        *r13_1 = result.d
    
    if (r15_2 != 0)
        result = sub_140a74f90(r15_2)
    
    if (r12_1 != 0)
        result = sub_140a74f90(r12_1)
    
    r12 = arg4

int64_t r8_4 = sx.q(*r13_1)

if (r8_4.d s>= 0 && r8_4.d s< *(r14 + 0x30))
    result = *(r14 + 0x28)
    int64_t* rdi_2 = *(result + (r8_4 << 3))
    
    if (rdi_2 != 0)
        return (*(*rdi_2 + 0x298))(rdi_2, arg2, sub_142365fb0(arg_18, rdi_2, r8_4.d), r12, arg5, 
            arg6)

return result
