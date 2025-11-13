// 函数: sub_142252a30
// 地址: 0x142252a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == *(arg1 + 0x2010))
    return 

int32_t i = 0
*(arg1 + 0x2010) = 0

if (*(arg1 + 0x2008) s> 0)
    int64_t* r11_1 = nullptr
    
    do
        int64_t* r9_1 = *(*(r11_1 + *(arg1 + 0x2000)) + 0x10)
        int64_t* rcx_1 = nullptr
        char rbx_1 = *(r9_1 + 0xc)
        
        if (rbx_1 u>= 1)
            rcx_1 = r9_1
        
        int64_t* rax
        
        if (rcx_1 != 0)
            rax = nullptr
            
            if (*(rcx_1 + 0xc) u>= 2)
                rax = rcx_1
            
            if (rax == 0)
                rax.b = 2
            else
                rax = zx.q(*(sx.q(rax[1].d) + *(*rax + 0x398)))
        
        if (rcx_1 == 0 || rax.b != 2)
            int32_t rcx_3 = *(arg1 + 0x2010)
            rax = nullptr
            
            if (rcx_3 s>= arg2)
                if (rbx_1 u>= 2)
                    rax = r9_1
                
                if (rax != 0)
                    char* rcx_4 = sx.q(rax[1].d)
                    void* rdx_2 = *rax
                    
                    if (*(rcx_4 + *(rdx_2 + 0x398)) == 4)
                        *(rcx_4 + *(rdx_2 + 0x368)) = 1
            else
                if (rbx_1 u>= 2)
                    rax = r9_1
                
                if (rax != 0)
                    int64_t rdx_1 = sx.q(rax[1].d)
                    void* r9_2 = *rax
                    
                    if (*(rdx_1 + *(r9_2 + 0x398)) == 4)
                        *(rdx_1 + *(r9_2 + 0x368)) = 0
                        rcx_3 = *(arg1 + 0x2010)
                
                *(arg1 + 0x2010) = rcx_3 + 1
        
        i += 1
        r11_1 = &r11_1[1]
    while (i s< *(arg1 + 0x2008))

*(arg1 + 0x20cc) = 1
