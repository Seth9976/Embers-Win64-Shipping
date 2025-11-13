// 函数: sub_142401e40
// 地址: 0x142401e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = -1
int64_t result

if (wcschr(arg2, 0x3d) == 0)
    result = -1
    
    do
        result += 1
    while (arg2[result] != 0)
else
    result = (wcschr(arg2, 0x3d) - arg2) s>> 1

int32_t r15 = 0
int32_t i = 0

if (*(arg1 + 0x50) s> 0)
    int64_t* rsi_1 = nullptr
    int64_t r12_1 = sx.q(result.d)
    
    do
        int64_t rax_3 = *(arg1 + 0x48)
        int16_t* const rcx_2
        
        if (*(rsi_1 + rax_3 + 8) == 0)
            rcx_2 = &data_142d40450
        else
            rcx_2 = *(rsi_1 + rax_3)
        
        result = sub_140a546e0(rcx_2, arg2, r12_1)
        
        if (result.d == 0)
            result = *(arg1 + 0x48)
            int32_t rdx_1 = *(result + rsi_1 + 8)
            int16_t* const rcx_3
            
            if (rdx_1 == 0)
                rcx_3 = &data_142d40450
            else
                rcx_3 = *(result + rsi_1)
            
            if (rcx_3[r12_1] == 0x3d)
                break
            
            if (rdx_1 == 0)
                result = &data_142d40450
            else
                result = *(result + rsi_1)
            
            if (*(result + (r12_1 << 1)) == 0)
                break
        
        i += 1
        rsi_1 = &rsi_1[2]
    while (i s< *(arg1 + 0x50))

if (i != *(arg1 + 0x50))
    int64_t* rsi_6 = *(arg1 + 0x48) + (sx.q(i) << 4)
    
    if (*rsi_6 != arg2)
        int32_t rbx_2
        
        if (arg2 == 0 || *arg2 == 0)
            rbx_2 = 0
        else
            do
                rbx += 1
            while (arg2[rbx] != 0)
            
            rbx_2 = rbx.d + 1
        
        rsi_6[1].d = 0
        
        if (*(rsi_6 + 0xc) != rbx_2)
            sub_1405947f0(rsi_6, rbx_2)
            r15 = rsi_6[1].d
        
        result = zx.q(r15 + rbx_2)
        rsi_6[1].d = result.d
        
        if (result.d s> *(rsi_6 + 0xc))
            result = sub_140594770(rsi_6)
        
        if (rbx_2 != 0)
            return memcpy(*rsi_6, arg2, rbx_2 * 2)
else
    int64_t rbp = sx.q(*(arg1 + 0x50))
    result = zx.q((rbp + 1).d)
    *(arg1 + 0x50) = result.d
    
    if (result.d s> *(arg1 + 0x54))
        result = sub_1405a4f90(arg1 + 0x48)
    
    void* rsi_3 = *(arg1 + 0x48)
    int64_t rcx_6 = rbp << 4
    int64_t* rsi_4 = rsi_3 + rcx_6
    
    if (rsi_3 != neg.q(rcx_6))
        *rsi_4 = 0
        rsi_4[1] = 0
        
        if (arg2 != 0 && *arg2 != 0)
            do
                rbx += 1
            while (arg2[rbx] != 0)
            
            if (rbx.d + 1 s> 0)
                sub_1405947f0(rsi_4, rbx.d + 1)
                r15 = rsi_4[1].d
            
            int32_t rax_4 = r15 + rbx.d + 1
            rsi_4[1].d = rax_4
            
            if (rax_4 s> *(rsi_4 + 0xc))
                sub_140594770(rsi_4)
            
            return UnDecorator::getReferenceType(*rsi_4, arg2, (rbx.d + 1) * 2)

return result
