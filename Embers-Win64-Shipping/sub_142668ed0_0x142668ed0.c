// 函数: sub_142668ed0
// 地址: 0x142668ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (*(*arg1 + 0x150))()

if (result != 0)
    int64_t* rbx_1 = *(result + 0x120)
    
    if (rbx_1 != 0)
        void* rax_1 = sub_14269bba0()
        void* rcx = rbx_1[2]
        result = sx.q(*(rax_1 + 0x38))
        
        if (result.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (result << 3)) == rax_1 + 0x30)
            jump(*(*rbx_1 + 0x2e8))

void* rbx_2 = data_143f5b298

if (*(rbx_2 + 0x190) != 0)
    result = sub_1425497a0()
    
    if (result != 0)
        void* rdx_3 = *(rbx_2 + 0x190)
        int64_t r8_2 = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (result << 3)) == r8_2
                && rdx_3 != 0)
            void* rbx_3 = data_143f5b298
            int64_t* rbx_4
            
            if (*(rbx_3 + 0x190) == 0)
                rbx_4 = nullptr
            else
                void* rax_3 = sub_1425497a0()
                
                if (rax_3 == 0)
                    rbx_4 = nullptr
                else
                    rbx_4 = *(rbx_3 + 0x190)
                    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                    
                    if (rax_4.d s> rbx_4[7].d || *(rbx_4[6] + (rax_4 << 3)) != rax_3 + 0x30)
                        rbx_4 = nullptr
            
            int64_t* rcx_5 = rbx_4[0x23]
            
            if (rcx_5 != 0)
            label_142668fed:
                result = (*(*rcx_5 + 0x2e8))(rcx_5, arg1)
                
                if (result.b == 0)
                    return result
            else
                (*(*rbx_4 + 0x390))(rbx_4)
                rcx_5 = rbx_4[0x23]
                
                if (rcx_5 != 0)
                    goto label_142668fed

result.b = 1
return result
