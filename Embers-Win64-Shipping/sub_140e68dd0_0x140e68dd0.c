// 函数: sub_140e68dd0
// 地址: 0x140e68dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
void* const rcx_1

if (*(arg1 + 0xe8) == *(arg1 + 0x114))
labelid_23:
    rcx_1 = nullptr
else
    void* r11_1 = arg1 + 0x118
    void* r9_1 = *(r11_1 + 8)
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t rax_1 = *(r11_1 + (((sx.q(*(arg1 + 0x128)) - 1) & rdi) << 2))
    
    if (rax_1 == 0xffffffff)
    label_140e68e50:
        rcx_1 = nullptr
    else
        int64_t r8 = *(arg1 + 0xe0)
        
        while (true)
            int64_t rdx = sx.q(rax_1) * 5
            rcx_1 = r8 + (rdx << 2)
            
            if (*(r8 + (rdx << 2)) == rdi.d)
                break
            
            rax_1 = *(rcx_1 + 0xc)
            
            if (rax_1 == 0xffffffff)
                goto label_140e68e50_1
        
        if (rax_1 == 0xffffffff)
        label_140e68e50_1:
            rcx_1 = nullptr

void* rax_2 = rcx_1 + 4

if (rcx_1 == 0)
    rax_2 = nullptr

int64_t arg_8

if (rax_2 != 0)
    arg_8 = *rax_2
else
    int64_t* rcx_2 = *(arg1 + 0x20)
    
    if (rcx_2 == 0 || rdi.d != 0xa)
        void* const r8_2
        
        if (*(arg1 + 0x98) == *(arg1 + 0xc4))
        labelid_a:
            r8_2 = nullptr
        else
            void* r8_1 = arg1 + 0xc8
            void* rcx_3 = *(r8_1 + 8)
            
            if (rcx_3 != 0)
                r8_1 = rcx_3
            
            int32_t rax_5 = *(r8_1 + (((sx.q(*(arg1 + 0xd8)) - 1) & rdi) << 2))
            
            if (rax_5 == 0xffffffff)
            label_140e68ef1:
                r8_2 = nullptr
            else
                int64_t r9_2 = *(arg1 + 0x90)
                
                while (true)
                    int64_t rdx_5 = sx.q(rax_5) * 5
                    r8_2 = r9_2 + (rdx_5 << 2)
                    
                    if (*(r9_2 + (rdx_5 << 2)) == rdi.d)
                        break
                    
                    rax_5 = *(r8_2 + 0xc)
                    
                    if (rax_5 == 0xffffffff)
                        goto label_140e68ef1_1
                
                if (rax_5 == 0xffffffff)
                label_140e68ef1_1:
                    r8_2 = nullptr
        
        void* rcx_5 = r8_2 + 4
        rax_2 = &data_143dbb1f0
        
        if (r8_2 == 0)
            rcx_5 = nullptr
        
        if (rcx_5 != 0)
            rax_2 = rcx_5
        
        arg_8 = *rax_2
    else
        (*(*rcx_2 + 0x18))(rcx_2, &arg_8)

*arg2 = arg_8
return arg2
