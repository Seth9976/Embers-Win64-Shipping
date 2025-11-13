// 函数: sub_142c70140
// 地址: 0x142c70140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1

if (arg2[3] != 0)
    sub_142c69e80(arg2, 0)

if (rbx != 0)
    sub_142c69f40(arg2, sub_142c70420)
    char* i = *rbx
    
    while (i != 0)
        int64_t rcx_2 = -1
        
        do
            rcx_2 += 1
        while (i[rcx_2] != 0)
        
        int64_t* rax_1 = data_143ccb898(rcx_2 + 0x20)
        
        if (rax_1 == 0)
            sub_142c69e80(arg2, 0)
            return 3
        
        char* rdx = *rbx
        void* r8_1 = &rax_1[3]
        char j
        
        do
            j = *rdx
            rdx = &rdx[1]
            *r8_1 = j
            r8_1 += 1
        while (j != 0)
        sub_142c69f60(arg2, arg2[1], rax_1, rax_1)
        i = rbx[1]
        rbx = &rbx[1]

return 0
