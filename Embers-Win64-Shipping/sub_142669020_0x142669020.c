// 函数: sub_142669020
// 地址: 0x142669020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (*(*arg1 + 0x150))()
int64_t* rbx_1

if (result != 0)
    rbx_1 = *(result + 0x120)

int64_t rax_2
int64_t* rcx_1

if (result == 0 || rbx_1 == 0)
    void* rbx_2 = data_143f5b298
    
    if (*(rbx_2 + 0x190) != 0)
        result = sub_1425497a0()
        
        if (result != 0)
            void* rdx_2 = *(rbx_2 + 0x190)
            int64_t r8_2 = result + 0x30
            result = sx.q(*(result + 0x38))
            
            if (result.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (result << 3)) == r8_2
                    && rdx_2 != 0)
                void* rbx_3 = data_143f5b298
                void* const rbx_4
                
                if (*(rbx_3 + 0x190) == 0)
                    rbx_4 = nullptr
                else
                    void* rax_3 = sub_1425497a0()
                    
                    if (rax_3 == 0)
                        rbx_4 = nullptr
                    else
                        rbx_4 = *(rbx_3 + 0x190)
                        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                        
                        if (rax_4.d s> *(rbx_4 + 0x38)
                                || *(*(rbx_4 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                            rbx_4 = nullptr
                
                result = sub_14269bba0()
                
                if (result != 0)
                    int64_t rdx_4 = result + 0x30
                    result = sx.q(*(result + 0x38))
                    
                    if (result.d s<= *(rbx_4 + 0x38) && *(*(rbx_4 + 0x30) + (result << 3)) == rdx_4)
                        void* rbx_5 = data_143f5b298
                        int64_t* rbx_6
                        
                        if (*(rbx_5 + 0x190) == 0)
                            rbx_6 = nullptr
                        else
                            void* rax_6 = sub_1425497a0()
                            
                            if (rax_6 == 0)
                                rbx_6 = nullptr
                            else
                                rbx_6 = *(rbx_5 + 0x190)
                                int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                                
                                if (rax_7.d s> rbx_6[7].d
                                        || *(rbx_6[6] + (rax_7 << 3)) != rax_6 + 0x30)
                                    rbx_6 = nullptr
                        
                        rcx_1 = rbx_6[0x23]
                        
                        if (rcx_1 != 0)
                        label_14266919e:
                            rax_2 = *rcx_1
                            goto label_1426691a4
                        
                        (*(*rbx_6 + 0x390))(rbx_6)
                        rcx_1 = rbx_6[0x23]
                        
                        if (rcx_1 != 0)
                            goto label_14266919e
else
    void* rax_1 = sub_14269bba0()
    void* rcx = rbx_1[2]
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (result << 3)) == rax_1 + 0x30)
        rax_2 = *rbx_1
        rcx_1 = rbx_1
    label_1426691a4:
        
        if ((*(rax_2 + 0x2e0))(rcx_1, arg1).b != 0)
            result.b = 1
            return result
result.b = 0
return result
