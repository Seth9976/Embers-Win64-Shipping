// 函数: sub_1408c44c0
// 地址: 0x1408c44c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg4

if (*(arg1 + 0x2d0) != 0)
    *(arg1 + 0x2d0) = 0
    return 

if (*(arg1 + 0x2a8) == 0)
    *(arg1 + 0x2e) &= 0xfb
    
    if (sub_140db3510(arg1 + 0x18) != 0)
        sub_140dc03a0(arg1 + 0x18, *(arg1 + 0x2e))

int64_t* rax_2 = *(arg1 + 0x2b0)
int64_t* r13 = nullptr

if (rax_2 == 0)
label_1408c47b1:
    *(arg1 + 0x2e) &= 0xfb
    
    if (sub_140db3510(arg1 + 0x18).b != 0)
        sub_140dc03a0(arg1 + 0x18, *(arg1 + 0x2e))
    
    *(arg1 + 0x2a8) = 0
    
    if (*(arg1 + 0x2c8) != 0)
        int64_t* rcx_19 = *(arg1 + 0x2c0)
        
        if (rcx_19 != 0 && (*(*rcx_19 + 0x28))(rcx_19).b != 0)
            if (*(arg1 + 0x2c8) != 0)
                r13 = *(arg1 + 0x2c0)
            
            (*(*r13 + 0x48))(r13)
    
    return 

if (rax_2[2].b != 0)
    rax_2[2].b = 0
    int64_t* i = *rax_2
    
    for (void* rbp_3 = &i[sx.q(rax_2[1].d) * 2]; i != rbp_3; i = &i[2])
        int64_t* rbx_1 = i[1]
        void* rcx_2 = *i
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (rcx_2 != 0)
            zmm6 = sub_1408be620(rcx_2, zmm6[0], arg2)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_5 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_5 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rax_13 = *(arg1 + 0x2b0)
int64_t* rdi_1 = *rax_13
void* r14_3 = &rdi_1[sx.q(rax_13[1].d) * 2]

if (rdi_1 != r14_3)
    do
        int64_t* rbx_2 = rdi_1[1]
        void* rbp_4 = *rdi_1
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        if (rbp_4 != 0)
            void*** rax_7 = data_143ceb928
            
            if (rax_7 == 0)
                void*** rax_8 = j_sub_140a82f30(zx.q((&rax_7[6]).d))
                
                if (rax_8 == 0)
                    rax_7 = nullptr
                else
                    rax_7, zmm6 = sub_1408b9380(rax_8)
                
                data_143ceb928 = rax_7
            
            if (data_143ceb920 != 0)
                zmm6 = sub_1408c10c0(rax_7, rbp_4, zmm6, arg2)
            else
                zmm6 = sub_1408c4230(rax_7, rbp_4, zmm6, arg2)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rax_11 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_11 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_1 = &rdi_1[2]
    while (rdi_1 != r14_3)
    
    rax_13 = *(arg1 + 0x2b0)
    rdi_1 = *rax_13

void* rbp_7 = &rdi_1[sx.q(rax_13[1].d) * 2]

if (rdi_1 != rbp_7)
    do
        int64_t* rbx_3 = rdi_1[1]
        void* rcx_10 = *rdi_1
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        if (rcx_10 != 0)
            sub_1408c4d10(rcx_10, arg2)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t rax_16 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_16 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        rdi_1 = &rdi_1[2]
    while (rdi_1 != rbp_7)
    
    rax_13 = *(arg1 + 0x2b0)

if (rax_13 == 0)
    goto label_1408c47b1

int64_t* rdi_2 = *rax_13
void* r14_6 = &rdi_2[sx.q(rax_13[1].d) * 2]

if (rdi_2 == r14_6)
    goto label_1408c47b1

while (true)
    int64_t* rbx_4 = rdi_2[1]
    void* rbp_8 = *rdi_2
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    if (rbp_8 != 0)
        if (sub_1408c0320(rbp_8).b == 0)
        label_1408c483d:
            
            if (rbx_4 == 0)
                break
            
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t rsi_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, zx.q(rsi_1))
            
            break
        
        if (sub_1408c0250(rbp_8).b == 0)
            goto label_1408c483d
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t rax_21 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rax_21 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    rdi_2 = &rdi_2[2]
    
    if (rdi_2 == r14_6)
        goto label_1408c47b1
