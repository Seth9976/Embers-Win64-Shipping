// 函数: sub_140bc3580
// 地址: 0x140bc3580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14

if (*(arg1 + 0x75) != 0)
    r14 = 0
else
    r14 = *(arg1 + 0x38)

void* i_1 = *(arg1 + 0x50)
void* i = arg1 + 0x40

if (i_1 != 0)
    i = i_1

int64_t result = sx.q(*(arg1 + 0x58))

for (void* rbp = i + (result << 3); i != rbp; i += 8)
    int64_t* rbx_1 = *i
    
    if (rbx_1[1].d != 0)
        int64_t* rcx = *rbx_1
        
        if (rcx != 0)
            result = (*(*rcx + 0x28))(rcx)
            
            if (result.b != 0)
                int64_t* rcx_1
                
                if (rbx_1[1].d == 0)
                    rcx_1 = nullptr
                else
                    rcx_1 = *rbx_1
                
                result = (*(*rcx_1 + 0x50))(rcx_1, arg1 + 0x1c, r14, zx.q(arg2))

return result
