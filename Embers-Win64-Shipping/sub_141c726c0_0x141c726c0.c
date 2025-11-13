// 函数: sub_141c726c0
// 地址: 0x141c726c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0x7e0)
int32_t rdi = 0
void* r12 = arg1
int64_t rax = *r8
int64_t* rax_1 = r8[1]
bool arg_18 = false

if (rax_1 != 0)
    *(rax_1 + 0xc) += 1

int128_t var_118 = zx.o(0)

if (arg2 != 0)
    void* rax_2 = sub_1425a1a30()
    void* rdx = *(arg2 + 0x10)
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rax_3.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
        int64_t r8_2 = *(arg2 + 0x38)
        int64_t* var_f0
        int64_t* var_e0
        int64_t* rdx_3
        
        if (r8_2 == 0)
            rdi = 4
            int64_t var_f8 = 0
            var_f0 = rax_1
            
            if (rax_1 != 0)
                int32_t rax_6 = 0
                bool z_1
                
                if (0 == rax_1[1].d)
                    rax_1[1].d = 0
                    z_1 = true
                else
                    rax_6 = rax_1[1].d
                    z_1 = false
                
                if (z_1)
                label_141c727e7:
                    var_f0 = nullptr
                else
                    while (true)
                        bool z_2
                        
                        if (rax_6 == rax_1[1].d)
                            rax_1[1].d = rax_6 + 1
                            z_2 = true
                        else
                            rax_1[1].d
                            z_2 = false
                        
                        if (z_2)
                            var_f8 = rax
                            break
                        
                        rax_6 = 0
                        bool z_3
                        
                        if (0 == rax_1[1].d)
                            rax_1[1].d = 0
                            z_3 = true
                        else
                            rax_6 = rax_1[1].d
                            z_3 = false
                        
                        if (z_3)
                            goto label_141c727e7
            
            rdx_3 = &var_f8
        else
            rdi = 3
            void var_78
            int64_t* rax_5 = sub_141c5eea0(r12, &var_78, r8_2)
            int64_t var_e8 = 0
            sub_141c4d620(&var_e0, &rax_5[1])
            
            if (var_e0 != 0)
                var_e8 = *rax_5
                *rax_5 = 0
            
            rdx_3 = &var_e8
        
        int64_t rax_8 = *rdx_3
        *rdx_3 = 0
        var_118.q = rax_8
        sub_1405aeff0(&var_118:8, &rdx_3[1])
        
        if ((rdi.b & 4) != 0)
            rdi &= 0xfffffffb
            
            if (var_f0 != 0)
                var_f0[1].d -= 1
                
                if (var_f0[1].d == 1)
                    (**var_f0)(var_f0)
                    int32_t rax_11 = *(var_f0 + 0xc)
                    *(var_f0 + 0xc) -= 1
                    
                    if (rax_11 == 1)
                        (*(*var_f0 + 8))(var_f0, 1)
        
        if ((rdi.b & 2) != 0)
            int64_t* rcx_9 = var_e0
            rdi &= 0xfffffffd
            
            if (rcx_9 != 0)
                rcx_9[1].d -= 1
                
                if (rcx_9[1].d == 1)
                    int64_t* rbx_3 = var_e0
                    (**rbx_3)(rbx_3)
                    int32_t rax_15 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rax_15 == 1)
                        int64_t* rcx_11 = var_e0
                        (*(*rcx_11 + 8))(rcx_11, 1)
        
        if ((rdi.b & 1) != 0)
            rdi &= 0xfffffffe
            int64_t* var_70
            
            if (var_70 != 0)
                int32_t rax_17 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (rax_17 == 1 && var_70 != 0)
                    (*(*var_70 + 8))(var_70, 1)
        
        void* rbx_4 = var_118.q
        void var_58
        
        if (rbx_4 != 0)
            arg3 = sub_141c6bce0(rbx_4, sub_141c5eea0(r12, &var_58, arg2), arg3)

int64_t* i = *(arg2 + 0x28)

for (void* r15 = &i[sx.q(*(arg2 + 0x30))]; i != r15; i = &i[1])
    void var_68
    int64_t* rax_21 = sub_141c5eea0(r12, &var_68, *i)
    void* var_108_1 = nullptr
    int64_t* var_100
    sub_141c4d620(&var_100, &rax_21[1])
    
    if (var_100 != 0)
        var_108_1 = *rax_21
        *rax_21 = 0
    
    int64_t* var_60
    
    if (var_60 != 0)
        int32_t rax_22 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (rax_22 == 1 && var_60 != 0)
            (*(*var_60 + 8))(var_60, 1)
    
    if (var_108_1 != 0)
        int128_t var_a8
        int128_t var_98
        int128_t* rcx_20
        
        if (var_118.q == 0)
            rdi |= 0x10
            var_a8 = rax.o
            
            if (rax_1 != 0)
                *(rax_1 + 0xc) += 1
            
            rcx_20 = &var_a8
        else
            void* rcx_19 = var_118:8.q
            rdi |= 8
            var_98 = var_118
            
            if (rcx_19 != 0)
                *(rcx_19 + 0xc) += 1
            
            rcx_20 = &var_98
        
        int64_t var_88 = *rcx_20
        int64_t var_80_1 = *(rcx_20 + 8)
        *(rcx_20 + 8) = 0
        *rcx_20 = 0
        arg3 = sub_141c6e750(var_108_1, &var_88, arg3)
        
        if ((rdi.b & 0x10) != 0)
            void* rcx_22 = var_a8:8.q
            rdi &= 0xffffffef
            
            if (rcx_22 != 0)
                int32_t rax_27 = *(rcx_22 + 0xc)
                *(rcx_22 + 0xc) -= 1
                
                if (rax_27 == 1)
                    int64_t* rcx_23 = var_a8:8.q
                    (*(*rcx_23 + 8))(rcx_23, 1)
        
        if ((rdi.b & 8) != 0)
            void* rcx_24 = var_98:8.q
            rdi &= 0xfffffff7
            
            if (rcx_24 != 0)
                int32_t rax_29 = *(rcx_24 + 0xc)
                *(rcx_24 + 0xc) -= 1
                
                if (rax_29 == 1)
                    int64_t* rcx_25 = var_98:8.q
                    (*(*rcx_25 + 8))(rcx_25, 1)
    
    int64_t* rcx_26 = var_100
    
    if (rcx_26 != 0)
        rcx_26[1].d -= 1
        
        if (rcx_26[1].d == 1)
            int64_t* rbx_6 = var_100
            (**rbx_6)(rbx_6)
            int32_t rax_33 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (rax_33 == 1)
                int64_t* rcx_28 = var_100
                (*(*rcx_28 + 8))(rcx_28, 1)

void* var_128
sub_141c5eea0(r12, &var_128, arg2)
int64_t* var_120
int64_t* var_b8 = var_120

if (var_120 != 0)
    int32_t rax_35 = 0
    bool z_4
    
    if (0 == var_120[1].d)
        var_120[1].d = 0
        z_4 = true
    else
        rax_35 = var_120[1].d
        z_4 = false
    
    if (z_4)
    label_141c72af8:
        var_b8 = nullptr
    else
        while (true)
            bool z_5
            
            if (rax_35 == var_120[1].d)
                var_120[1].d = rax_35 + 1
                z_5 = true
            else
                var_120[1].d
                z_5 = false
            
            if (z_5)
                void* rsi = var_128
                
                if (rsi != 0)
                    int64_t* rcx_40 = rsi + 0x18
                    void* rdx_16
                    
                    if (*(rsi + 0x18) != 0)
                        rdx_16 = rcx_40[1]
                    
                    if (*(rsi + 0x18) != 0 && rdx_16 != 0)
                        rax_35 = 0
                        
                        if (0 == *(rdx_16 + 8))
                            *(rdx_16 + 8) = 0
                        else
                            rax_35 = *(rdx_16 + 8)
                        
                        rsi = var_128
                        
                        if (rax_35 s> 0 || *(rsi + 0x1e0) != 0 || *(rsi + 0x1d8) != 0)
                            rax_35.b = 0
                        else
                            rax_35.b = 1
                    else if (*(rsi + 0x1e0) != 0 || *(rsi + 0x1d8) != 0)
                        rax_35.b = 0
                    else
                        rax_35.b = 1
                    
                    void* lpCriticalSection
                    
                    if (rax_35.b == 0)
                        void* rdx_21
                        
                        if (*rcx_40 != 0)
                            rdx_21 = rcx_40[1]
                        
                        if (*rcx_40 != 0 && rdx_21 != 0)
                            rax_35 = 0
                            
                            if (0 == *(rdx_21 + 8))
                                *(rdx_21 + 8) = 0
                            else
                                rax_35 = *(rdx_21 + 8)
                            
                            rsi = var_128
                            
                            if (rax_35 s> 0 || (*(rsi + 0x1e0) == 0 && *(rsi + 0x1d8) == 0))
                                rax_35.b = 0
                            else
                                rax_35.b = 1
                        else if (*(rsi + 0x1e0) != 0 || *(rsi + 0x1d8) != 0)
                            rax_35.b = 1
                        else
                            rax_35.b = 0
                        
                        if (rax_35.b != 0)
                            lpCriticalSection = r12 + 0x9f0
                            EnterCriticalSection(lpCriticalSection)
                            int64_t r13_2 = sx.q(*(r12 + 0x9e8))
                            int32_t rax_52 = (r13_2 + 1).d
                            *(r12 + 0x9e8) = rax_52
                            
                            if (rax_52 s> *(r12 + 0x9ec))
                                sub_1405a4f90(r12 + 0x9e0)
                            
                            int64_t* rcx_56 = (r13_2 << 4) + *(r12 + 0x9e0)
                            *rcx_56 = rsi
                            rcx_56[1] = var_120
                            var_120[1].d += 1
                            goto label_141c72dda
                    else
                        lpCriticalSection = r12 + 0x9f0
                        EnterCriticalSection(lpCriticalSection)
                        int64_t rcx_42 = sx.q(*(r12 + 0x9d8))
                        
                        if (rcx_42.d != 0)
                            int32_t rdi_3 = 0
                            int32_t r13_1 = 0
                            int32_t arg_20 = 0
                            int64_t r8_6 = rcx_42
                            int64_t r12_1 = 0
                            bool r10_1 = **(r12 + 0x9d0) != rsi
                            arg_18 = r10_1
                            
                            do
                                int64_t r9_1 = sx.q(r13_1)
                                r12_1 += 1
                                r13_1 += 1
                                
                                if (r12_1 s< r8_6)
                                    int64_t rcx_45 = (r12_1 << 4) + *(arg1 + 0x9d0)
                                    
                                    do
                                        int32_t rax_43
                                        rax_43.b = *rcx_45 != rsi
                                        
                                        if (zx.d(r10_1) != rax_43)
                                            break
                                        
                                        r13_1 += 1
                                        r12_1 += 1
                                        rcx_45 += 0x10
                                    while (r12_1 s< r8_6)
                                
                                int32_t i_2 = r13_1 - r9_1.d
                                
                                if (r10_1 != 0)
                                    if (rdi_3 != r9_1.d)
                                        int64_t rax_44 = *(arg1 + 0x9d0)
                                        memmove((sx.q(rdi_3) << 4) + rax_44, (r9_1 << 4) + rax_44, 
                                            i_2 << 4)
                                        r8_6 = rcx_42
                                        r10_1 = arg_18
                                    
                                    rdi_3 += i_2
                                    arg_20 = rdi_3
                                else if (i_2 != 0)
                                    int64_t* rsi_1 = (r9_1 << 4) + *(arg1 + 0x9d0) + 8
                                    int32_t i_1
                                    
                                    do
                                        int64_t* rdi_4 = *rsi_1
                                        
                                        if (rdi_4 != 0)
                                            rdi_4[1].d -= 1
                                            
                                            if (rdi_4[1].d == 1)
                                                (**rdi_4)(rdi_4)
                                                int32_t rax_50 = *(rdi_4 + 0xc)
                                                *(rdi_4 + 0xc) -= 1
                                                
                                                if (rax_50 == 1)
                                                    (*(*rdi_4 + 8))(rdi_4, 1)
                                        
                                        rsi_1 = &rsi_1[2]
                                        i_1 = i_2
                                        i_2 -= 1
                                    while (i_1 != 1)
                                    rsi = var_128
                                    r8_6 = rcx_42
                                    r10_1 = arg_18
                                    rdi_3 = arg_20
                                
                                r10_1 ^= 1
                                arg_18 = r10_1
                            while (r12_1 s< r8_6)
                            
                            r12 = arg1
                            *(r12 + 0x9d8) = rdi_3
                        
                    label_141c72dda:
                        
                        if (lpCriticalSection != 0)
                            LeaveCriticalSection(lpCriticalSection)
                
                break
            
            rax_35 = 0
            bool z_6
            
            if (0 == var_120[1].d)
                var_120[1].d = 0
                z_6 = true
            else
                rax_35 = var_120[1].d
                z_6 = false
            
            if (z_6)
                goto label_141c72af8

int32_t result = sub_140868ad0(r12 + 0x980, arg2)

if (var_b8 != 0)
    result = var_b8[1].d
    var_b8[1].d -= 1
    
    if (result == 1)
        (**var_b8)(var_b8)
        result = *(var_b8 + 0xc)
        *(var_b8 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_b8 + 8))(var_b8, 1)

if (var_120 != 0)
    result = *(var_120 + 0xc)
    *(var_120 + 0xc) -= 1
    
    if (result == 1)
        result = (*(*var_120 + 8))(var_120, 1)

void* rcx_36 = var_118:8.q

if (rcx_36 != 0)
    result = *(rcx_36 + 8)
    *(rcx_36 + 8) -= 1
    
    if (result == 1)
        int64_t* rbx_8 = var_118:8.q
        (**rbx_8)(rbx_8)
        result = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (result == 1)
            int64_t* rcx_38 = var_118:8.q
            result = (*(*rcx_38 + 8))(rcx_38, 1)

if (rax_1 != 0)
    int32_t r14_1 = *(rax_1 + 0xc)
    *(rax_1 + 0xc) -= 1
    
    if (r14_1 == 1)
        return (*(*rax_1 + 8))(rax_1, zx.q(r14_1))

return result
