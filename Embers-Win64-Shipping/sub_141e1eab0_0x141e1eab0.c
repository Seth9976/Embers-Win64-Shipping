// 函数: sub_141e1eab0
// 地址: 0x141e1eab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 0x18)

if (rdx != 0)
    int64_t* rcx = *(*arg2 + 0xa0)
    (*(*rcx + 0x210))(rcx, rdx, 0)

void* i = *(arg1 + 8)

for (void* r12_2 = (sx.q(*(arg1 + 0x10)) << 7) + i; i != r12_2; i -= -0x80)
    char rax_3 = sub_141e10220(i + 0x60)
    sub_140cea340()
    void* rbx_2
    
    if (rax_3 == 0)
        bool rax_4
        
        if (*(i + 0x40) == 0)
            rax_4 = true
            rbx_2 = nullptr
        else
            rax_4 = sub_140d3e110(i + 0x48)
            rbx_2 = *(i + 0x40)
            rax_4 = rax_4 == 0
        
        if (rax_4 != 0 && *(i + 0x58) != 0)
            void* rax_8 = sub_140cd0630(i + 0x40, nullptr, 0)
            rbx_2 = rax_8
            
            if (rax_8 == 0 || (data_143e1b828 & *(*(rax_8 + 8) + 0x10)) == 0)
                rbx_2 = *(i + 0x40)
                
                if (rbx_2 != 0)
                    *(i + 0x48) = 0xffffffff
                    *(i + 0x4c) = 0
                    *(i + 0x40) = 0
                    rbx_2 = nullptr
            else
                *(i + 0x40) = rbx_2
    else
        bool rcx_2
        
        if (*(i + 0x60) == 0)
            rcx_2 = true
            rbx_2 = nullptr
        else
            char rax_5 = sub_140d3e110(i + 0x68)
            rbx_2 = *(i + 0x60)
            rcx_2 = rax_5 == 0
        
        if (rcx_2 != 0 && *(i + 0x78) != 0)
            void* rax_6 = sub_140cd0630(i + 0x60, nullptr, 0)
            rbx_2 = rax_6
            
            if (rax_6 == 0 || (data_143e1b828 & *(*(rax_6 + 8) + 0x10)) == 0)
                rbx_2 = *(i + 0x60)
                
                if (rbx_2 != 0)
                    *(i + 0x68) = 0xffffffff
                    *(i + 0x6c) = 0
                    *(i + 0x60) = 0
                    rbx_2 = nullptr
            else
                *(i + 0x60) = rbx_2
    
    sub_140d12020()
    bool rcx_10
    void* r8_1
    
    if (*(arg1 + 0x20) == 0)
        rcx_10 = true
        r8_1 = nullptr
    else
        char rax_10 = sub_140d3e110(arg1 + 0x28)
        r8_1 = *(arg1 + 0x20)
        rcx_10 = rax_10 == 0
    
    if (rcx_10 != 0 && *(arg1 + 0x38) != 0)
        void* rax_11 = sub_140cd0630(arg1 + 0x20, nullptr, 0)
        r8_1 = rax_11
        
        if (rax_11 == 0 || (data_143e1c4a8 & *(*(rax_11 + 8) + 0x10)) == 0)
            r8_1 = *(arg1 + 0x20)
            
            if (r8_1 != 0)
                *(arg1 + 0x28) = 0xffffffff
                r8_1 = nullptr
                *(arg1 + 0x2c) = 0
                *(arg1 + 0x20) = 0
        else
            *(arg1 + 0x20) = r8_1
    
    void* rax_13 = sub_141e22dc0(i, *arg2, r8_1)
    uint64_t rax = sub_141e248b0(i, *arg2)
    uint32_t rdx_4 = zx.d(*(i + 0x15))
    void* rax_15
    char* rcx_26
    uint64_t rdx_6
    
    if (rdx_4 == 0)
        uint32_t rcx_27 = zx.d(*(i + 0x16))
        
        if (rcx_27 == 1)
            char rcx_46 = *(zx.q(*(rbx_2 + 0x79)) + rax) & *(rbx_2 + 0x7b)
            sub_140cea340()
            bool rcx_47
            
            if (*(i + 0x18) == 0)
                rcx_47 = true
                rax_15 = nullptr
            else
                char rax_28
                rax_28, rdx_6 = sub_140d3e110(i + 0x20)
                rax_15 = *(i + 0x18)
                rcx_47 = rax_28 == 0
            
            if (rcx_47 != 0 && *(i + 0x30) != 0)
                rax_15, rdx_6 = sub_140cd0630(i + 0x18, nullptr, 0)
                
                if (rax_15 == 0 || (data_143e1b828 & *(*(rax_15 + 8) + 0x10)) == 0)
                    rax_15 = *(i + 0x18)
                    
                    if (rax_15 != 0)
                        rax_15 = nullptr
                        *(i + 0x20) = 0xffffffff
                        *(i + 0x24) = 0
                        *(i + 0x18) = rax_15
                else
                    *(i + 0x18) = rax_15
            
            rcx_26 = zx.q(*(rax_15 + 0x79))
            
            if (rcx_46 == 0)
            label_141e1f095:
                rdx_6.b = 0
                goto label_141e1f09b
            
            rdx_6 = zx.q(*(rax_15 + 0x7a))
        label_141e1f09b:
            rax.b = not.b(*(rax_15 + 0x7b))
            rax.b &= *(rcx_26 + rax_13)
            rax.b |= rdx_6.b
            *(rcx_26 + rax_13) = rax.b
        else if (rcx_27 == 2)
            int512_t zmm1_1
            int512_t zmm2_1
            zmm1_1, zmm2_1 = sub_140cea340()
            bool rcx_41
            void* r10_1
            
            if (*(i + 0x18) == 0)
                rcx_41 = true
                r10_1 = nullptr
            else
                char rax_24 = sub_140d3e110(i + 0x20)
                r10_1 = *(i + 0x18)
                rcx_41 = rax_24 == 0
            
            if (rcx_41 != 0 && *(i + 0x30) != 0)
                void* rax_25
                rax_25, zmm1_1, zmm2_1 = sub_140cd0630(i + 0x18, nullptr, 0)
                r10_1 = rax_25
                
                if (rax_25 == 0 || (data_143e1b828 & *(*(rax_25 + 8) + 0x10)) == 0)
                    r10_1 = *(i + 0x18)
                    
                    if (r10_1 != 0)
                        *(i + 0x20) = 0xffffffff
                        *(i + 0x24) = 0
                        r10_1 = nullptr
                        *(i + 0x18) = 0
                else
                    *(i + 0x18) = r10_1
            
            sub_140bd9910(*(r10_1 + 0x78), rax_13, rax, 1, zmm1_1, zmm2_1)
        else if (rcx_27 == 3)
            int64_t rax_19 = (*(*rbx_2 + 0x140))(rbx_2, rax)
            sub_140cea340()
            bool rcx_36
            void* r9_1
            
            if (*(i + 0x18) == 0)
                rcx_36 = true
                r9_1 = nullptr
            else
                char rax_20 = sub_140d3e110(i + 0x20)
                r9_1 = *(i + 0x18)
                rcx_36 = rax_20 == 0
            
            if (rcx_36 != 0 && *(i + 0x30) != 0)
                void* rax_21 = sub_140cd0630(i + 0x18, nullptr, 0)
                r9_1 = rax_21
                
                if (rax_21 == 0 || (data_143e1b828 & *(*(rax_21 + 8) + 0x10)) == 0)
                    r9_1 = *(i + 0x18)
                    
                    if (r9_1 != 0)
                        *(i + 0x20) = 0xffffffff
                        *(i + 0x24) = 0
                        r9_1 = nullptr
                        *(i + 0x18) = 0
                else
                    *(i + 0x18) = r9_1
            
            (*(*r9_1 + 0x148))(r9_1, rax_13, rax_19)
        else if (rcx_27 == 4)
            sub_140cea340()
            
            if (*(i + 0x18) == 0)
                if (*(i + 0x30) != 0)
                    goto label_141e1ee8b
                
                *rax_13 = *rax
            else if (sub_140d3e110(i + 0x20) != 0 || *(i + 0x30) == 0)
                *rax_13 = *rax
            else
            label_141e1ee8b:
                void* rax_17 = sub_140cd0630(i + 0x18, nullptr, 0)
                
                if (rax_17 != 0 && (data_143e1b828 & *(*(rax_17 + 8) + 0x10)) != 0)
                    *(i + 0x18) = rax_17
                    *rax_13 = *rax
                else if (*(i + 0x18) == 0)
                    *rax_13 = *rax
                else
                    *(i + 0x20) = 0xffffffff
                    *(i + 0x24) = 0
                    *(i + 0x18) = 0
                    *rax_13 = *rax
        else
            memcpy(rax_13, rax, *(i + 0x3c))
    else if (rdx_4 == 1)
        char rdi_2 = *(zx.q(*(rbx_2 + 0x79)) + rax) & *(rbx_2 + 0x7b)
        
        if (*(i + 0x16) == 1)
            sub_140cea340()
            bool rcx_16
            
            if (*(i + 0x18) == 0)
                rcx_16 = true
                rax_15 = nullptr
            else
                char rax_14
                rax_14, rdx_6 = sub_140d3e110(i + 0x20)
                rax_15 = *(i + 0x18)
                rcx_16 = rax_14 == 0
            
            if (rcx_16 != 0 && *(i + 0x30) != 0)
                rax_15, rdx_6 = sub_140cd0630(i + 0x18, nullptr, 0)
                
                if (rax_15 == 0 || (data_143e1b828 & *(*(rax_15 + 8) + 0x10)) == 0)
                    rax_15 = *(i + 0x18)
                    
                    if (rax_15 != 0)
                        rax_15 = nullptr
                        *(i + 0x20) = 0xffffffff
                        *(i + 0x24) = 0
                        *(i + 0x18) = rax_15
                else
                    *(i + 0x18) = rax_15
            
            rcx_26 = zx.q(*(rax_15 + 0x79))
            
            if (rdi_2 != 0)
                goto label_141e1f095
            
            rdx_6 = zx.q(*(rax_15 + 0x7a))
            goto label_141e1f09b
        
        rax, rdx_6 = sub_140cea340()
        bool rcx_20
        uint64_t r8_2
        
        if (*(i + 0x18) == 0)
            rcx_20 = true
            r8_2 = nullptr
        else
            rax, rdx_6 = sub_140d3e110(i + 0x20)
            r8_2 = *(i + 0x18)
            rcx_20 = rax.b == 0
        
        if (rcx_20 == 0 || *(i + 0x30) == 0)
            goto label_141e1edc9
        
        rax = sub_140cd0630(i + 0x18, nullptr, 0)
        r8_2 = rax
        
        if (rax != 0 && (data_143e1b828 & *(*(rax + 8) + 0x10)) != 0)
            *(i + 0x18) = rax
        label_141e1edc9:
            
            if (r8_2 != 0 && ((zx.q(*(*(r8_2 + 8) + 0x10)) u>> 0x15).b & 1) != 0)
                rax_15 = *(r8_2 + 0x78)
                rcx_26 = zx.q(*(rax_15 + 0x79))
                
                if (rdi_2 != 0)
                    goto label_141e1f095
                
                rdx_6 = zx.q(*(rax_15 + 0x7a))
                goto label_141e1f09b
        else if (*(i + 0x18) != 0)
            *(i + 0x20) = 0xffffffff
            *(i + 0x24) = 0
            *(i + 0x18) = 0
