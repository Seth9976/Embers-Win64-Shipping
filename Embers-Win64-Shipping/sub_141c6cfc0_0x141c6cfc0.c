// 函数: sub_141c6cfc0
// 地址: 0x141c6cfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
void* rbp_1 = sx.q(arg2) * 0x3f0 + arg1->__offset(0xc8).q
int32_t i = 0

if (*(rbp_1 + 0x1b0) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t rax_1 = *(rbp_1 + 0x1a8)
        void* rcx = *(rsi_1 + rax_1)
        void* var_28 = rcx
        int64_t* rbx_1 = *(rsi_1 + rax_1 + 8)
        int64_t* var_20_1 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
            rbx_1 = var_20_1
            rcx = var_28
        
        if (rcx != 0)
            void* rax_2 = sub_142366a90(rcx)
            
            if (rax_2 != 0)
                sub_1423732f0(rax_2, &var_28)
            
            sub_14235b9e0(var_28)
            rbx_1 = var_20_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_5 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_5 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        i += 1
        rsi_1 = &rsi_1[2]
    while (i s< *(rbp_1 + 0x1b0))

int32_t rax_7 = *(rbp_1 + 0x1b4)
void* rsi_2 = *(rbp_1 + 0x1a8)
int32_t i_4 = *(rbp_1 + 0x1b0)

if (rax_7 s< 0)
    if (i_4 != 0)
        void* rsi_4 = rsi_2 + 8
        int32_t i_1
        
        do
            int64_t* rbx_3 = *rsi_4
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t rax_14 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rax_14 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            rsi_4 += 0x10
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        rax_7 = *(rbp_1 + 0x1b4)
    
    *(rbp_1 + 0x1b0) = 0
    
    if (rax_7 != 0)
        sub_1405a5410(rbp_1 + 0x1a8, 0)
else
    if (i_4 != 0)
        int64_t* rsi_3 = rsi_2 + 8
        int32_t i_2
        
        do
            int64_t* rbx_2 = *rsi_3
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t rax_10 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_10 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rsi_3 = &rsi_3[2]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    *(rbp_1 + 0x1b0) = 0

int32_t i_3 = 0

if (*(rbp_1 + 0x1c0) s> 0)
    int64_t rdx_1 = 0
    
    do
        rdx_1 += 8
        i_3 += 1
        *(rdx_1 + *(rbp_1 + 0x1b8) - 8) = 0
    while (i_3 s< *(rbp_1 + 0x1c0))

int32_t rax_17 = *(rbp_1 + 0x1c4)
*(rbp_1 + 0x1c0) = 0

if (rax_17 s< 0 && rax_17 != 0)
    sub_1405c5570(rbp_1 + 0x1b8, 0)

return LeaveCriticalSection(arg1) __tailcall
