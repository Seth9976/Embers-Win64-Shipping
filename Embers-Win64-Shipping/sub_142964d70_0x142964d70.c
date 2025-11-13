// 函数: sub_142964d70
// 地址: 0x142964d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = 0x20
__chkstk(0x20)
int32_t rbx = arg1[0x10].d
arg1[0x11] += arg3
int32_t r12_2 = neg.d(arg3.d) & 7
int32_t rbp_1 = rbx & 7
void* i_1 = arg3
char* r15 = arg2

if (arg1[0x11] u< arg3)
    int64_t i = 1
    result = &arg1[0x12]
    
    do
        int64_t temp0_1 = *result
        *result += 1
        
        if (temp0_1 != -1)
            break
        
        i += 1
        result += 8
    while (i u< 4)

while (true)
    if (r12_2 == 0 && rbp_1 == 0)
        while (i_1 != 0)
            uint64_t rsi_4
            
            if (rbx == 0)
                rsi_4 = i_1 u>> 9
            
            if (rbx != 0 || rsi_4 == 0)
                uint64_t r8_2 = zx.q(0x200 - rbx)
                void* rcx_13 = &arg1[8] + (zx.q(rbx) u>> 3)
                
                if (i_1 u< r8_2)
                    result = memcpy(rcx_13, r15, (i_1 u>> 3).d)
                    rbx += i_1.d
                    i_1 = nullptr
                else
                    uint32_t count = (0x200 - rbx) u>> 3
                    i_1 -= r8_2
                    memcpy(rcx_13, r15, count)
                    r15 = &r15[zx.q(count)]
                    result = sub_1429750a0(arg1, &arg1[8], 1)
                    rbx = 0
                
                arg1[0x10].d = rbx
            else
                result = sub_1429750a0(arg1, r15, rsi_4)
                r15 = &r15[rsi_4 << 9 u>> 3]
                i_1 = zx.q(i_1.d) & 0x1ff
        
        return result
    
    int32_t result_1 = 8 - r12_2
    uint64_t rdx
    
    while (true)
        if (i_1 == 0)
            return result
        
        result = zx.q(rbx u>> 3)
        rdx = zx.q(result.d)
        
        if (rbp_1 == r12_2)
            break
        
        uint64_t r8 = zx.q((result + 1).d)
        
        if (i_1 u<= 8)
            char rsi_2 = *r15 << r12_2.b
            
            if (rbp_1 == 0)
                *(result + arg1 + 0x40) = rsi_2
            else
                result.b = rsi_2 u>> rbp_1.b
                *(rdx + arg1 + 0x40) |= result.b
            
            rbx += i_1.d
            
            if (rbx == 0x200)
                result = sub_1429750a0(arg1, &arg1[8], 1)
                r8 = 0
                rbx = 0
            
            if (rbp_1 != 0)
                *(r8 + arg1 + 0x40) = rsi_2 << (8 - rbp_1.b)
            
            i_1 = nullptr
        else
            result.b = *r15 << r12_2.b
            uint8_t rsi_1 = r15[1] u>> result_1.b | result.b
            
            if (rbp_1 == 0)
                *(rdx + arg1 + 0x40) = rsi_1
            else
                result.b = rsi_1 u>> rbp_1.b
                *(rdx + arg1 + 0x40) |= result.b
            
            rbx += 8
            i_1 -= 8
            r15 = &r15[1]
            
            if (rbx u>= 0x200)
                result = sub_1429750a0(arg1, &arg1[8], 1)
                r8 = 0
                rbx &= 0x1ff
            
            if (rbp_1 != 0)
                *(r8 + arg1 + 0x40) = rsi_1 << (8 - rbp_1.b)
                arg1[0x10].d = rbx
                continue
        
        arg1[0x10].d = rbx
    
    rbx += result_1
    rbp_1 = 0
    *(rdx + arg1 + 0x40) |= (0xff s>> r12_2.b).b & *r15
    r12_2 = 0
    result = zx.q(result_1)
    r15 = &r15[1]
    i_1 -= result
    
    if (rbx == 0x200)
        result = sub_1429750a0(arg1, &arg1[8], 1)
        rbx = 0
    
    arg1[0x10].d = rbx
