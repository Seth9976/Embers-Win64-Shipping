// 函数: sub_141cc2060
// 地址: 0x141cc2060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg1[1].d)
char rbx = arg3
void* r8

if (r9.d s>= 0)
    r8 = *arg1

if (r9.d s< 0 || r9.d s>= *(r8 + 0x20))
    arg1[2].b = 1
else
    int32_t rdx = (r9 + 1).d
    arg1[1].d = rdx
    uint64_t r14
    
    if (arg1[2].b == 0)
        switch (zx.d(*(r9 + *(r8 + 0x18))) - 1)
            case 0
                return sub_141cc1f10(arg1, arg2, rbx)
            case 1
                return sub_141cc1dc0(arg1, arg2, rbx)
            case 2
                return sub_141cc2270(arg1, arg2, rbx)
            case 3
                r14.b = 0
                
                if (rdx s< 0 || rdx s>= *(r8 + 0x20))
                label_141cc216d:
                    arg1[2].b = 1
                    r14.b = 0
                    return zx.q(r14.b)
                
                arg1[1].d = rdx + 1
                char i_6 = *(r9 + *(r8 + 0x18) + 1)
                
                if (i_6 == 0)
                    return zx.q(r14.b)
                
                uint64_t i_3 = zx.q(i_6)
                uint64_t i
                
                do
                    char rax_4 = sub_141cc2060(arg1, arg2, zx.q(rbx))
                    
                    if (rbx == 0 && rax_4 == 1)
                        r14 = zx.q(rax_4)
                        rbx = rax_4
                    
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                return zx.q(r14.b)
            case 4
                r14.b = 1
                
                if (rdx s< 0 || rdx s>= *(r8 + 0x20))
                    goto label_141cc216d
                
                arg1[1].d = rdx + 1
                char i_7 = *(sx.q(rdx) + *(r8 + 0x18))
                
                if (i_7 == 0)
                    return zx.q(r14.b)
                
                uint64_t i_4 = zx.q(i_7)
                uint64_t i_1
                
                do
                    if (rbx == 0 && sub_141cc2060(arg1, arg2, zx.q(rbx)) == 0)
                        r14.b = 0
                        rbx = 1
                    
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
                return zx.q(r14.b)
            case 5
                r14.b = 1
                
                if (rdx s< 0 || rdx s>= *(r8 + 0x20))
                    goto label_141cc216d
                
                arg1[1].d = rdx + 1
                char i_8 = *(sx.q(rdx) + *(r8 + 0x18))
                
                if (i_8 == 0)
                    return zx.q(r14.b)
                
                uint64_t i_5 = zx.q(i_8)
                uint64_t i_2
                
                do
                    char rax_10 = sub_141cc2060(arg1, arg2, zx.q(rbx))
                    
                    if (rbx == 0 && rax_10 == 1)
                        r14.b = 0
                        rbx = rax_10
                    
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
                return zx.q(r14.b)

uint64_t result
result.b = 0
return result
