// 函数: sub_141a58a10
// 地址: 0x141a58a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14
int64_t* var_10 = r14
void* rbx = arg1

while (true)
    r14.b = 0
    void var_28
    *(rbx + 0x28) = *sub_140b214c0(&var_28)
    *(rbx + 0x4c) += 1
    int32_t rax_2 = *(rbx + 0x40)
    int32_t rcx_1 = *(rbx + 0x4c)
    int64_t rbp_1 = sx.q(rax_2 - 1)
    
    if (rax_2 - 1 s>= 0)
        int64_t rsi_2 = rbp_1 << 4
        int64_t temp1_1
        
        do
            int64_t rax_4 = *(rbx + 0x38)
            
            if (*(rsi_2 + rax_4 + 8) == 0)
                r14.b = 1
            else
                int64_t* rcx_2 = *(rsi_2 + rax_4)
                
                if (rcx_2 == 0)
                    r14.b = 1
                else if ((*(*rcx_2 + 0x50))(rcx_2) == 0)
                    r14.b = 1
            
            rsi_2 -= 0x10
            temp1_1 = rbp_1
            rbp_1 -= 1
        while (temp1_1 - 1 s>= 0)
        rcx_1 = *(rbx + 0x4c)
    
    uint64_t result = zx.q(rcx_1 - 1)
    *(rbx + 0x4c) = result.d
    
    if (r14.b != 0 && result.d s<= 0)
        int32_t rbp_2 = *(rbx + 0x40)
        int32_t rsi_3 = 0
        int32_t rdx_1 = rbp_2
        
        if (rbp_2 s> 0)
            r14 = nullptr
            
            do
                int64_t rax_7 = *(rbx + 0x38)
                
                if (*(r14 + rax_7 + 8) == 0)
                    sub_1405a4880(rbx + 0x38, rsi_3, 1, 1)
                else
                    int64_t* rcx_3 = *(r14 + rax_7)
                    
                    if (rcx_3 == 0)
                        sub_1405a4880(rbx + 0x38, rsi_3, 1, 1)
                    else if ((*(*rcx_3 + 0x20))(rcx_3) != 0)
                        sub_1405a4880(rbx + 0x38, rsi_3, 1, 1)
                    else
                        rsi_3 += 1
                        r14 = &r14[2]
                
                rdx_1 = *(rbx + 0x40)
            while (rsi_3 s< rdx_1)
        
        result = zx.q(rdx_1 * 2)
        
        if (result.d s<= 2)
            result = 2
        
        *(rbx + 0x48) = result.d
        
        if (rbp_2 s> result.d && *(rbx + 0x44) != rdx_1)
            result = sub_1405a5410(rbx + 0x38, rdx_1)
    
    while (true)
        rbx = *(rbx + 0x20)
        
        if (rbx == 0)
            return result
        
        void* rax_10 = sub_141a7bb80()
        void* rdx_3 = *(rbx + 0x10)
        result = sx.q(*(rax_10 + 0x38))
        
        if (result.d s<= *(rdx_3 + 0x38))
            uint64_t result_1 = result
            result = *(rdx_3 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax_10 + 0x30)
                break
