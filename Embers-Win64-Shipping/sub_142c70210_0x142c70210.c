// 函数: sub_142c70210
// 地址: 0x142c70210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1

if (arg2[3] != 0)
    sub_142c69e80(arg2, 0)

if (rdi != 0)
    sub_142c69f40(arg2, sub_142c70420)
    char* i = *rdi
    
    while (i != 0)
        int64_t rcx_2 = -1
        
        do
            rcx_2 += 1
        while (i[rcx_2] != 0)
        
        int64_t* rax_1 = data_143ccb898(rcx_2 + 0x20)
        
        if (rax_1 == 0)
            sub_142c69e80(arg2, 0)
            return 3
        
        char* r8_1 = *rdi
        void* r9_1 = rax_1 + 0x1a
        char j
        
        do
            j = *r8_1
            r8_1 = &r8_1[1]
            *r9_1 = j
            r9_1 += 1
        while (j != 0)
        char* rax_2 = strchr(rax_1 + 0x1a, 0x3a)
        
        if (rax_2 == 0)
            rax_1[3].w = 0x50
        else
            *rax_2 = 0
            rax_1[3].w = strtol(&rax_2[1], nullptr, 0xa)
        
        sub_142c69f60(arg2, arg2[1], rax_1, rax_1)
        i = rdi[1]
        rdi = &rdi[1]

return 0
