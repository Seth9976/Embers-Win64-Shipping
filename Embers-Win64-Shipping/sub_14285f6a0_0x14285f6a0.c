// 函数: sub_14285f6a0
// 地址: 0x14285f6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* r9 = *(arg1 + 8)
int32_t rbx = arg2
int32_t rax = *r9
void* const rdi_1

if (rax == 0x10000)
    rdi_1 = &data_1434dbff0
else
    if (rax != 0x1ffff)
        int32_t rcx = *arg1
        
        if (rbx == rcx)
            return 1
        
        int32_t rsi_2 = 1
        int32_t rdx
        
        if ((*(*(r9 + 0xc0) + 0x60) & 8) == 0)
            if (rbx s< rcx)
                rsi_2 = -1
            
            rdx.b = rsi_2 == 0
            return zx.q(rdx)
        
        if (rcx == 0x100)
            rcx = 0xff00
        
        if (rbx == 0x100)
            rbx = 0xff00
        
        if (rbx s> rcx)
            rsi_2 = -1
        
        rdx.b = rsi_2 == 0
        return zx.q(rdx)
    
    rdi_1 = &data_1434dc080

int32_t i = *rdi_1

while (i != 0)
    if (rbx != i)
        int32_t r8 = 1
        
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
            int32_t i_1 = i
            int32_t rax_4 = rbx
            
            if (i == 0x100)
                i_1 = 0xff00
            
            if (rbx == 0x100)
                rax_4 = 0xff00
            
            if (rax_4 s> i_1)
                r8 = -1
        else if (rbx s< i)
            r8 = -1
        
        if (r8 s> 0)
            break
    
    int64_t rax_5 = *(rdi_1 + 8)
    
    if (rax_5 != 0 && rbx == i)
        int32_t rax_7 = sub_14285f490(arg1, rax_5())
        
        if (rax_7 == 0)
            int32_t rax_8
            
            if (arg1[0xe] != rax_7 && rbx == 0x304)
                rax_8 = sub_14285e2f0(arg1)
            
            if (arg1[0xe] == rax_7 || rbx != 0x304 || rax_8 != 0)
                if (arg3 != 0)
                    *arg3 = (*(rdi_1 + 8))()
                
                return 1
    
    i = *(rdi_1 + 0x18)
    rdi_1 += 0x18

return 0
