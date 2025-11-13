// 函数: sub_142869d70
// 地址: 0x142869d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rcx = *(arg1 + 8)
void* rax = *(rcx + 0xc0)
int32_t rax_1

if ((*(rax + 0x60) & 8) == 0)
    rax_1 = *rcx

int32_t rdx
int32_t rdi

if ((*(rax + 0x60) & 8) != 0 || rax_1 s< 0x304)
    if (arg1[0x136] == 1)
        rdi = 1
        rdx = 0x303
    else
        rdx = *arg1
        rdi = 0
else if (rax_1 != 0x10000 || arg1[0x136] == 1)
    rdi = 1
    rdx = 0x303
else
    rdx = *arg1
    rdi = 0

int32_t rax_2 = sub_142873b60(arg2, rdx, 2)
int32_t rax_3

if (rax_2 != 0)
    void* const rdx_1
    
    if (arg1[0x136] != 1)
        rdx_1 = *(arg1 + 0xa8) + 0x98
    else
        rdx_1 = &data_1434dbe90
    
    rax_3 = sub_142873970(arg2, rdx_1, 0x20)

if (rax_2 == 0 || rax_3 == 0)
    sub_142856580(arg1, 0x50, 0x1eb, 0x44, "ssl\statem\statem_srvr.c", 0x930)
else
    void* rcx_3 = *(arg1 + 0x508)
    
    if (*(rcx_3 + 0xf0) != 0)
        *(rcx_3 + 0x90) = 0
    else if ((*(*(arg1 + 0x598) + 0x48) & 2) == 0 && arg1[0x32] == 0)
        *(rcx_3 + 0x90) = 0
    
    void* rdx_3
    int64_t r8_1
    
    if (rdi == 0)
        void* rax_5 = *(arg1 + 0x508)
        r8_1 = *(rax_5 + 0x90)
        rdx_3 = rax_5 + 0x98
    else
        r8_1 = *(arg1 + 0x550)
        rdx_3 = &arg1[0x14c]
    
    if (r8_1 u<= 0x20)
        int32_t* rcx_4
        
        if (rdi == 0)
            rcx_4 = *(*(arg1 + 0xa8) + 0x298)
        
        int32_t rdi_1
        
        if (rdi != 0 || rcx_4 == 0)
            rdi_1 = 0
        else
            rdi_1 = *rcx_4
        
        void arg_8
        
        if (sub_142874080(arg2, rdx_3, r8_1, 1) == 0)
            sub_142856580(arg1, 0x50, 0x1eb, 0x44, "ssl\statem\statem_srvr.c", 0x967)
        else if ((*(*(arg1 + 8) + 0x98))(*(*(arg1 + 0xa8) + 0x238), arg2, &arg_8) == 0)
            sub_142856580(arg1, 0x50, 0x1eb, 0x44, "ssl\statem\statem_srvr.c", 0x967)
        else if (sub_142873b60(arg2, rdi_1, 1) == 0)
            sub_142856580(arg1, 0x50, 0x1eb, 0x44, "ssl\statem\statem_srvr.c", 0x967)
        else
            int32_t r8_3
            
            if (arg1[0x136] != 1)
                int32_t* rcx_9 = *(arg1 + 8)
                
                if ((*(*(rcx_9 + 0xc0) + 0x60) & 8) != 0)
                    r8_3 = 0x100
                else
                    int32_t rax_12 = *rcx_9
                    
                    if (rax_12 s< 0x304)
                        r8_3 = 0x100
                    else
                        r8_3 = 0x200
                        
                        if (rax_12 == 0x10000)
                            r8_3 = 0x100
            else
                r8_3 = 0x800
            
            if (sub_142875910(arg1, arg2, r8_3, 0, 0) != 0)
                if (arg1[0x136] != 1)
                    if ((arg1[0x156].b & 1) != 0)
                        return 1
                    
                    if (sub_1428821e0(arg1, 0) != 0)
                        return 1
                else
                    sub_1428574d0(*(arg1 + 0x508))
                    *(arg1 + 0x508) = 0
                    arg1[0x32] = 0
                    
                    if (sub_14285e030(arg1, nullptr, 0, 0, 0) != 0)
                        return 1
    else
        sub_142856580(arg1, 0x50, 0x1eb, 0x44, "ssl\statem\statem_srvr.c", 0x955)

return 0
