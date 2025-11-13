// 函数: sub_142c75b70
// 地址: 0x142c75b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
char* rbx = arg1
*arg2 = 0
*arg3 = 0
char* rcx = nullptr
void* const r9 = nullptr
int64_t rdi = -1

do
    rdi += 1
while (rbx[rdi] != 0)

if (rdi != 0 && (rdi.b & 3) == 0)
    char i = *rbx
    
    if (i != 0x3d)
        while (i != 0)
            i = *(rcx + rbx + 1)
            rcx = &rcx[1]
            
            if (i == 0x3d)
                break
    
    if (*(rcx + rbx) == 0x3d)
        r9 = 1
        
        if (*(rcx + rbx + 1) == 0x3d)
            r9 = 2
    
    if (r9 + rcx == rdi)
        uint64_t rdi_1 = rdi u>> 2
        void* r15_1 = rdi_1 * 3 - r9
        char* rax_3 = data_143ccb898(r15_1 + 1)
        
        if (rax_3 == 0)
            return zx.q((&rax_3[0x1b]).d)
        
        char* rsi_1 = rax_3
        
        if (rdi_1 != 0)
            do
                int64_t rax_5 = sub_142c75ef0(rsi_1, rbx)
                
                if (rax_5 == 0)
                    data_143ccb8a0(rax_3)
                    return 0x3d
                
                rsi_1 = &rsi_1[rax_5]
                rbx = &rbx[4]
                rbp += 1
            while (rbp u< rdi_1)
        
        *rsi_1 = 0
        *arg2 = rax_3
        *arg3 = r15_1
        return 0

return 0x3d
