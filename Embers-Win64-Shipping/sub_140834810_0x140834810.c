// 函数: sub_140834810
// 地址: 0x140834810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2
int32_t rdx

if (arg3 != 0xffffffff)
    rdx = 1 << arg3.b
else
    rdx = arg3

int32_t r8

if (data_143ce3858 != 0)
    r8 = -1
else
    int32_t rcx_1 = data_14396f030
    
    if (rcx_1 != 0xffffffff)
        r8 = 1 << rcx_1.b
    else
        rcx_1 = data_14396f034
        data_14396f030 = rcx_1
        
        if (rcx_1 == 0xffffffff)
            r8 = -1
        else
            r8 = 1 << rcx_1.b

int64_t rbp
rbp.b = (rdx & *arg1 & r8) != 0

if (arg1[4] s> 0)
    void* arg_8 = rbx
    
    if (rbx != 0)
        while (true)
            for (int64_t* i = *(arg1 + 8); i != &i[sx.q(arg1[4]) * 2]; i = &i[2])
                if (*i == *(rbx + 0x18))
                    if (i != 0)
                        int32_t rdx_2
                        
                        if (arg3 != 0xffffffff)
                            rdx_2 = 1 << arg3.b
                        else
                            rdx_2 = arg3
                        
                        if ((*(i + 0xc) & rdx_2) != 0)
                            i.b = (i[1].d & rdx_2) != 0
                            return i
                    
                    break
            
            rbx = *(rbx + 0x58)
            
            if (rbx == 0)
                break
            
            void* rax_2 = sub_14249a9d0()
            void* rdx_3 = *(rbx + 0x10)
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s> *(rdx_3 + 0x38))
                break
            
            if (*(*(rdx_3 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
                break
            
            arg_8 = rbx

return zx.q(rbp.b)
