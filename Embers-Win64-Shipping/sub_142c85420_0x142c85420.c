// 函数: sub_142c85420
// 地址: 0x142c85420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg1
int32_t* rbx = arg1[0xd3]
int32_t rbp = -1
__time64_t _Time
int64_t r8 = _time64(&_Time)
__time64_t _Time_1 = _Time

if (_Time_1 s<= *(rbx + 0x38))
    if (_Time_1 s> sx.q(rbx[9]) + *(rbx + 0x40))
        rbp = 7
        r8 = _time64(&rbx[0x10])
        _Time_1 = _Time
    
    int32_t rax_4 = rbx[0xe] - _Time_1.d
    *arg2 = 0
    
    if (rax_4 s> 0)
        int32_t result
        int32_t rdx
        
        if (rbp == 0xffffffff)
            int32_t rax_5 = sub_142c64080(*(rbx + 0x18), -1, -1, 0)
            
            if (rax_5 == 0xffffffff)
                char* rax_7
                int512_t zmm2
                rax_7, zmm2 = sub_142c55790(arg1, WSAGetLastError(), arg3)
                sub_142c64760(r14, "%s", rax_7, zmm2)
                rbx[3] = 5
            else if (rax_5 != 0)
                result, arg3 = sub_142c859e0(arg1)
                
                if (result != 0)
                    return result
                
                rdx = rbx[3]
                goto label_142c85515
        else
            rdx = rbp
        label_142c85515:
            int512_t zmm2_1
            result, zmm2_1 = sub_142c86610(rbx, rdx, arg3)
            
            if (result != 0)
                return result
            
            result.b = *rbx == 3
            *arg2 = result.b
            
            if (result.b != 0)
                sub_142c68d40(arg1, 0xffffffff, -1, 0, zmm2_1, 0, 0xffffffff, nullptr)
        return 0
else
    rbx[2] = 0xffffff9d
    *rbx = 3
    *arg2 = 0

sub_142c64760(r14, "TFTP response timeout", r8, arg3)
return 0x1c
