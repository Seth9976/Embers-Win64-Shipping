// 函数: sub_1421e0f30
// 地址: 0x1421e0f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x178)

if (rdx != 0)
    int32_t i = 0
    
    if (*(rdx + 0x70) s> 0)
        int64_t rdi_1 = 0
        
        do
            void* rax_1 = *(rdx + 0x68)
            void* rcx = rdx + 8
            
            if (rax_1 != 0)
                rcx = rax_1
            
            int64_t* rcx_1 = *(rcx + rdi_1)
            
            if (rcx_1 != 0)
                (*(*rcx_1 + 0x10))(rcx_1, arg1)
                rdx = *(arg1 + 0x178)
            
            i += 1
            rdi_1 += 8
        while (i s< *(rdx + 0x70))

void* result

if ((*(arg1 + 0x168) & 4) == 0)
    void* i_3 = *(arg1 + 0x3d0)
    void* i_1 = arg1 + 0x3c0
    
    if (i_3 != 0)
        i_1 = i_3
    
    result = (sx.q(*(arg1 + 0x3d8)) << 4) + i_1
    void* result_1 = result
    
    for (; i_1 != result; i_1 += 0x10)
        int32_t j = 0
        
        if (*(i_1 + 8) s> 0)
            int64_t* rsi_1 = nullptr
            
            do
                void* k_1 = *(arg1 + 0x3d0)
                void* k = arg1 + 0x3c0
                
                if (k_1 != 0)
                    k = k_1
                
                for (void* r14_3 = (sx.q(*(arg1 + 0x3d8)) << 4) + k; k != r14_3; k += 0x10)
                    if (rsi_1 s>= 0 && j s< *(k + 8))
                        int64_t* rdi_2 = *(rsi_1 + *k)
                        
                        if (rdi_2 != 0 && *(rdi_2 + 0x149) != 0)
                            (*(*rdi_2 + 0x30))(rdi_2)
                            (**rdi_2)(rdi_2, 1)
                            *(rsi_1 + *k) = 0
                
                j += 1
                rsi_1 = &rsi_1[1]
            while (j s< *(i_1 + 8))
            
            result = result_1
else
    result = sub_1421dfdc0(arg1)

int32_t i_2 = 0

if (*(arg1 + 0x3e8) s> 0)
    int64_t* r15_1 = nullptr
    
    do
        int64_t* r14_4 = *(r15_1 + *(arg1 + 0x3e0))
        
        while (*(arg1 + 0x3d8) s<= 0)
            int64_t rbx_1 = sx.q(*(arg1 + 0x3d8))
            int32_t rax_10 = (rbx_1 + 1).d
            *(arg1 + 0x3d8) = rax_10
            
            if (rax_10 s> *(arg1 + 0x3dc))
                sub_140dbc6f0(arg1 + 0x3c0, rbx_1.d)
            
            void* rax_11 = *(arg1 + 0x3d0)
            void* rcx_6 = arg1 + 0x3c0
            
            if (rax_11 != 0)
                rcx_6 = rax_11
            
            void* rcx_7 = rcx_6 + (rbx_1 << 4)
            *rcx_7 = 0
            *(rcx_7 + 8) = 0
        
        void** rax_14 = *(arg1 + 0x3d0)
        void** rbx_2 = arg1 + 0x3c0
        
        if (rax_14 != 0)
            rbx_2 = rax_14
        
        int32_t rax_15 = r14_4[2].d
        
        for (int32_t j_1 = rbx_2[1].d; rax_15 s>= j_1; j_1 = rbx_2[1].d)
            rbx_2[1].d = j_1 + 1
            
            if (j_1 + 1 s> *(rbx_2 + 0xc))
                sub_1405a4d70(rbx_2)
            
            *(*rbx_2 + (sx.q(j_1) << 3)) = 0
            rax_15 = r14_4[2].d
        
        int64_t rdx_4 = sx.q(rax_15)
        result = *rbx_2
        void** rbx_3 = result + (rdx_4 << 3)
        
        if (*(result + (rdx_4 << 3)) == 0)
            result = (*(*r14_4 + 8))(r14_4, zx.q(*(arg1 + 0x169)), arg1)
            *rbx_3 = result
        
        i_2 += 1
        r15_1 = &r15_1[1]
    while (i_2 s< *(arg1 + 0x3e8))

bool cond:2 = *(arg1 + 0x3ec) == 0
*(arg1 + 0x3e8) = 0

if (cond:2)
    return result

return sub_1405c5570(arg1 + 0x3e0, 0) __tailcall
