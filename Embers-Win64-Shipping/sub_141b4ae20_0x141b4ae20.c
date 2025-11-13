// 函数: sub_141b4ae20
// 地址: 0x141b4ae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x1c)
void* rbp = arg1
void* rsi = rbp
int32_t i_4 = *(arg1 + 0x18)
void* rcx = *(arg1 + 0x10)

if (result s< 0)
    if (rcx != 0)
        rsi = rcx
    
    if (i_4 != 0)
        void* rsi_2 = rsi + 8
        int32_t i
        
        do
            int64_t* rbx_2 = *rsi_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t rax_4 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_4 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rsi_2 += 0x10
            i = i_4
            i_4 -= 1
        while (i != 1)
        result = *(rbp + 0x1c)
    
    *(arg1 + 0x18) = 0
    
    if (result != 0)
        result = sub_140dbd3e0(rbp, 0)
else
    if (rcx != 0)
        rsi = rcx
    
    if (i_4 != 0)
        void* rsi_1 = rsi + 8
        int32_t i_1
        
        do
            int64_t* rbx_1 = *rsi_1
            
            if (rbx_1 != 0)
                result = rbx_1[1].d
                rbx_1[1].d -= 1
                
                if (result == 1)
                    (**rbx_1)(rbx_1)
                    result = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (result == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)
            
            rsi_1 += 0x10
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x18) = 0

int64_t rcx_6 = *(rbp + 0x30)

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = *(rbp + 0x20)

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

void* rcx_10 = *(arg1 + 0x10)
int32_t i_3 = *(arg1 + 0x18)

if (rcx_10 != 0)
    rbp = rcx_10

if (i_3 != 0)
    void* rdi = rbp + 8
    int32_t i_2
    
    do
        int64_t* rbx_3 = *rdi
        
        if (rbx_3 != 0)
            result = rbx_3[1].d
            rbx_3[1].d -= 1
            
            if (result == 1)
                (**rbx_3)(rbx_3)
                result = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rbx_3 + 8))(rbx_3, 1)
        
        rdi += 0x10
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)
    rcx_10 = *(arg1 + 0x10)

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10) __tailcall
