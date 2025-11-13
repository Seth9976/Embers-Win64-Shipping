// 函数: sub_142c83ad0
// 地址: 0x142c83ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1
int32_t i = 0
int32_t* rbx = 0x408
int64_t rbp = *(result + 0x250)

do
    if (i != 1)
        int512_t entry_zmm2
        
        if (*(rbx + rbp + 0x400) == 1)
            result = *arg1
            int64_t rdx_1 = *(result + 0x250)
            int32_t rcx = *(rbx + rdx_1 - 0x400)
            
            if (rcx == 0)
                *(rbx + rdx_1 - 0x400) = 2
                result, entry_zmm2 = sub_142c84400(arg1, 0xfb, i, entry_zmm2)
            else if (rcx == 2)
                if (*(rbx + rdx_1) == 1)
                    *(rbx + rdx_1) = 0
            else if (rcx == 3 && *(rbx + rdx_1) == 0)
                *(rbx + rdx_1) = rcx - 2
        
        if (*(rbx + rbp + 0x1000) == 1)
            result = *arg1
            int64_t rdx_2 = *(result + 0x250)
            int32_t rcx_3 = *(rbx + rdx_2 + 0x800)
            
            if (rcx_3 == 0)
                *(rbx + rdx_2 + 0x800) = 2
                result, entry_zmm2 = sub_142c84400(arg1, 0xfd, i, entry_zmm2)
            else if (rcx_3 == 2)
                if (*(rbx + rdx_2 + 0xc00) == 1)
                    *(rbx + rdx_2 + 0xc00) = 0
            else if (rcx_3 == 3 && *(rbx + rdx_2 + 0xc00) == 0)
                *(rbx + rdx_2 + 0xc00) = rcx_3 - 2
    
    i += 1
    rbx = &rbx[1]
while (i s< 0x28)

return result
