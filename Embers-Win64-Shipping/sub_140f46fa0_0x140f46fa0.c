// 函数: sub_140f46fa0
// 地址: 0x140f46fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = nullptr
char rax = 0
int64_t* rbx_1
int64_t rdi

if (*(arg1 + 0x390) == 0)
    rbx_1 = 0.q
    rdi.b = 0
else
    rbx_1 = *(arg1 + 0x398)
    
    if (rbx_1 == 0)
        rbx_1 = 0.q
        rdi.b = 0
    else
        int32_t rdx = rbx_1[1].d
        
        if (rdx s<= 0)
            rbx_1 = 0.q
            rdi.b = 0
        else
            void* rcx = nullptr
            int64_t* rax_1 = rbx_1
            
            if (rbx_1 == 0)
                goto label_140f46ff3
            
            if (rdx == 0)
                rbx_1 = nullptr
            else
                rbx_1[1].d = rdx + 1
                rax_1 = rbx_1
            label_140f46ff3:
                
                if (rax_1 != 0)
                    rcx = *(arg1 + 0x390)
            
            void* rax_3
            
            if (*(rcx + 0x3a0) != 0)
                rax_3 = *(rcx + 0x3a8)
            
            if (*(rcx + 0x3a0) == 0 || rax_3 == 0 || *(rax_3 + 8) s<= 0)
                rax = 1
                rdi.b = 0
            else
                rdi.b = 1
                rax = 1

if ((rax & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (rdi.b == 0)
    int32_t zmm0_1 = sub_140da8440(arg1 + 0x4a0, arg3)
    *arg2 = 0x3f800000
    arg2[1] = 0x3f800000
    arg2[2] = 0x3f800000
    arg2[3] = zmm0_1
else
    int64_t* rbx_2 = *(arg1 + 0x398)
    void* rcx_3 = nullptr
    
    if (rbx_2 != 0)
        int32_t rax_6 = rbx_2[1].d
        
        if (rax_6 == 0)
            rbx_2 = nullptr
        else
            rbx_2[1].d = rax_6 + 1
            
            if (rbx_2 != 0)
                rcx_3 = *(arg1 + 0x390)
    
    int64_t* rdi_1 = *(rcx_3 + 0x3a8)
    
    if (rdi_1 != 0)
        int32_t rax_8 = rdi_1[1].d
        
        if (rax_8 != 0)
            rdi_1[1].d = rax_8 + 1
            rax_8.b = 1
        
        if (rax_8.b == 0)
            rdi_1 = nullptr
        
        if (rdi_1 != 0)
            rbp = *(rcx_3 + 0x3a0)
    
    int128_t zmm0
    int512_t zmm1_1
    zmm0, zmm1_1 = sub_140da8440(arg1 + 0x4a0, arg3)
    zmm1_1.o = zmm0
    sub_140e24c80(rbp, zmm1_1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    *arg2 = 0x3f800000
    arg2[1] = 0x3f800000
    arg2[2] = 0x3f800000
    arg2[3] = 0x3f800000

return arg2
