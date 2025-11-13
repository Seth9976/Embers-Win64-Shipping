// 函数: sub_1420b1030
// 地址: 0x1420b1030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* rax_1 = sub_142496c20()
int64_t rdi_1 = rax_1[0x23]

if (rdi_1 == 0)
    int64_t rdx = *rax_1
    (*(rdx + 0x390))(rax_1, rdx)
    rdi_1 = rax_1[0x23]

void* rax_3 = (*(*arg1 + 0x150))(arg1)

if (rax_3 != 0)
    void* rax_4 = sub_142437e30(rax_3, 1, 1)
    
    if (rax_4 != 0 && *(rax_4 + 0x248) != 0)
        void* rax_5 = sub_142496c20()
        
        if (rax_5 != 0)
            void* rdx_1 = *(rax_4 + 0x248)
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30
                    && rdx_1 != 0)
                void* rax_8 = sub_142496c20()
                int64_t rax_9
                int64_t* rbx_3
                
                if (rax_8 != 0)
                    rbx_3 = *(rax_4 + 0x248)
                    rax_9 = sx.q(*(rax_8 + 0x38))
                
                if (rax_8 == 0 || rax_9.d s> rbx_3[7].d
                        || *(rbx_3[6] + (rax_9 << 3)) != rax_8 + 0x30)
                    rbx_3 = nullptr
                
                rdi_1 = rbx_3[0x23]
                
                if (rdi_1 == 0)
                    (*(*rbx_3 + 0x390))(rbx_3)
                    rdi_1 = rbx_3[0x23]

(*(*arg2 + 0x538))(arg2, rdi_1)
