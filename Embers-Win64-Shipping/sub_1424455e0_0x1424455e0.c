// 函数: sub_1424455e0
// 地址: 0x1424455e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
int32_t var_48 = 0xffffffff
int64_t var_58 = 0
int64_t var_50 = 0
void* result = sub_140d3cc80(sub_142545b50(), &var_58, 1, 0x10, 0)
int64_t r12 = sx.q(var_50.d)
int32_t i = var_48 + 1
int64_t r15 = var_58
int32_t i_1 = i

if (i s< r12.d)
    result = zx.q(i)
    
    do
        result = sx.q(result.d)
        
        if (*(r15 + (result << 3)) != 0)
            break
        
        result = zx.q(i + 1)
        i_1 = result.d
        i = result.d
    while (result.d s< r12.d)

uint64_t var_40 = 0
uint64_t rdi = 0
int32_t j_1 = r12.d
int32_t j = r12.d

if (r12.d != 0)
    sub_1405c4a00(&var_40, r12.d, 0)
    rdi = var_40
    result = memcpy(rdi, r15, (r12 << 3).d)
    i = i_1
    r12 = zx.q(var_50.d)
    r15 = var_58
    j = j_1

if (i != r12.d)
    do
        sub_14242c2d0(arg1, *(rdi + (sx.q(i) << 3)), 0)
        result = zx.q(i + 1)
        i = result.d
        
        while (result.d s< j)
            result = sx.q(i)
            
            if (*(rdi + (result << 3)) != 0)
                break
            
            result = zx.q(i + 1)
            i = result.d
    while (i != r12.d)
    
    r15 = var_58

if (rdi != 0)
    result = sub_140a74f90(rdi)
    r15 = var_58

if (r15 != 0)
    result = sub_140a74f90(r15)

int64_t* rcx_9 = *(arg1 + 0x1b0)

if (rcx_9 != 0)
    int32_t rdx_5 = 0
    var_58 = 0
    int32_t rbx_1 = 0
    var_50:4.d = 0
    var_50.d = 0
    
    if (*(arg1 + 0x198) s> 0)
        int64_t* rdi_1 = nullptr
        
        while (true)
            int64_t rsi = *(*(rdi_1 + *(arg1 + 0x190)) + 0xe0)
            var_50.d = r14 + 1
            
            if (r14 + 1 s> rdx_5)
                sub_1405a4d70(&var_58)
            
            rbx_1 += 1
            rdi_1 = &rdi_1[1]
            *(var_58 + (sx.q(r14) << 3)) = rsi
            
            if (rbx_1 s>= *(arg1 + 0x198))
                break
            
            rdx_5 = var_50:4.d
            r14 = var_50.d
        
        rcx_9 = *(arg1 + 0x1b0)
    
    result = (*(*rcx_9 + 0x280))(rcx_9, &var_58)
    int64_t rcx_10 = var_58
    
    if (rcx_10 != 0)
        return sub_140a74f90(rcx_10)

return result
