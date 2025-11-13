// 函数: sub_1422c9140
// 地址: 0x1422c9140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1
void* r14 = arg2
void* rax
int64_t rdx
rax, rdx = sub_142452380()
char var_c8

if (rax == 0)
    var_c8 = 0
else
    int64_t rax_1 = sx.q(*(rax + 0x38))
    
    if (rax_1.d s> *(r14 + 0x38))
        var_c8 = 0
    else
        rdx = rax_1
        
        if (*(*(r14 + 0x30) + (rdx << 3)) != rax + 0x30)
            var_c8 = 0
        else
            *(rsi + 0x20) |= 1
            var_c8 = 1

int32_t rbx = -1
int32_t var_c4 = 0
int32_t var_a8 = -1
sub_140ca8370(r14, rdx.b)
int32_t rdx_1 = *(r14 + 0xf8)
void* r15 = rsi + 0x28
void* var_78 = r15
*(r15 + 8) = 0

if (*(r15 + 0xc) != rdx_1)
    sub_1405a5220(r15, rdx_1)

int32_t i = 0

if (*(r14 + 0xf8) s> 0)
    void* r10_2 = rsi + 0x38
    int64_t r12_1 = 0
    void* var_b8_1 = r10_2
    
    do
        int64_t** rax_3 = *(r14 + 0xf0)
        int32_t var_c0_1 = rbx
        int32_t rbx_1 = *(r15 + 8)
        int64_t* rdi_1 = *(rax_3 + r12_1)
        int32_t rsi_1 = *(rax_3 + r12_1 + 8)
        *(r15 + 8) = rbx_1 + 1
        
        if (rbx_1 + 1 s> *(r15 + 0xc))
            sub_1405c4f50(r15)
            r10_2 = var_b8_1
        
        int64_t rdx_3 = *r15
        int64_t rcx_4 = sx.q(rbx_1) * 6
        *(rdx_3 + (rcx_4 << 3)) = rdi_1
        int64_t rax_6
        
        if (rdi_1 == 0)
            rax_6 = 0
        else
            rax_6 = rdi_1[5]
        
        *(rdx_3 + (rcx_4 << 3) + 8) = rax_6
        *(rdx_3 + (rcx_4 << 3) + 0x18) = 0
        *(rdx_3 + (rcx_4 << 3) + 0x24) = 0
        *(rdx_3 + (rcx_4 << 3) + 0x2c) = 0
        *(rdx_3 + (rcx_4 << 3) + 0x10) = rsi_1
        *(rdx_3 + (rcx_4 << 3) + 0x1c) = 0
        *(rdx_3 + (rcx_4 << 3) + 0x28) = 0xffffffff
        uint64_t rdx_4 = zx.q(rbx_1.w)
        int32_t rbx_3 = *(rdi_1 + 0x3c) * rsi_1
        uint64_t r14_2 = rdx_4 * 0x30
        *(r14_2 + *r15 + 0x1c) = (*(arg1 + 0x40)).w
        var_c4 = sub_1422b39c0(r10_2, rdi_1, rbx_3, var_c4, rdx_4.b, 0, rsi_1, arg3.d, var_c8)
        *(r14_2 + *r15 + 0x1e) = (*(arg1 + 0x40)).w
        int64_t rax_12 = *r15
        *(r14_2 + rax_12 + 0x2c) |= 2
        *(r14_2 + *r15 + 0x14) = *(rdi_1 + 0x4c) + rbx_3
        int64_t* rbx_5 = *r15 + r14_2
        void* rsi_2 = *rbx_5
        
        if (rsi_2 != 0 && ((*(*(rsi_2 + 8) + 0x10) u>> 0x14).b & 1) != 0)
            void* rsi_3 = *(rsi_2 + 0x78)
            int32_t rcx_13 = *(rbx_5 + 0x2c) | 0x20
            *(rbx_5 + 0x2c) = rcx_13
            
            if (((*(rsi_3 + 0xb0) u>> 0x14).b & 1) != 0)
                *(rbx_5 + 0x2c) = rcx_13 | 8
                void* rax_18 = sub_14254fdf0()
                
                if (rax_18 != 0)
                    int64_t rax_19 = sx.q(*(rax_18 + 0x38))
                    
                    if (rax_19.d s<= *(rsi_3 + 0x38)
                            && *(*(rsi_3 + 0x30) + (rax_19 << 3)) == rax_18 + 0x30)
                        *(rbx_5 + 0x2c) |= 0x80
            
            if (((*(rsi_3 + 0xb0) u>> 0xa).b & 1) != 0)
                *(rbx_5 + 0x2c) |= 0x10
        
        if (((zx.q(*(*rbx_5 + 0x40)) u>> 9).b & 1) != 0)
            *(rbx_5 + 0x2c) |= 0x40
        
        if ((rdi_1[8] & 0x4000) != 0)
            int64_t rax_24 = *r15
            *(r14_2 + rax_24 + 0x2c) |= 4
        
        rbx = rdx_4.d
        r10_2 = var_b8_1
        r14 = arg2
        
        if (((*(r14_2 + *r15 + 0x2c) u>> 3).b & 1) == 0)
            rbx = var_c0_1
        
        i += 1
        r12_1 += 0x10
    while (i s< *(r14 + 0xf8))
    
    rsi = arg1
    var_a8 = rbx

int64_t rbx_6 = sx.q(*(rsi + 0x40))
void* rdi_2 = rsi + 0x38
void* var_70 = rdi_2
int32_t rax_26 = (rbx_6 + 1).d
*(rdi_2 + 8) = rax_26

if (rax_26 s> *(rdi_2 + 0xc))
    sub_1405c4e40(rdi_2)

void* rax_29 = (rbx_6 << 5) + *rdi_2
__builtin_memset(rax_29, 0, 0x20)
*(rax_29 + 0x1c) = 1
int64_t* rcx_21 = *(r14 + 0x118)
void* var_a0 = nullptr
int32_t var_98 = 0

if (rcx_21 == 0)
    (*(*r14 + 0x390))(r14)
    rcx_21 = *(r14 + 0x118)

(*(*rcx_21 + 0x1b0))(rcx_21, &var_a0)
int32_t var_c0_2 = 0

if (var_98 s> 0)
    int64_t rbx_7 = 0
    int64_t var_b0_1 = 0
    TEB* gsbase
    void* rax_33 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
    int32_t rax_59
    
    do
        void* rax_34 = var_a0
        uint64_t rdx_9 = zx.q(*(rax_34 + rbx_7))
        int16_t var_c4_1 = rdx_9.w
        
        if (rdx_9.d s< *(rsi + 0x30))
            int32_t rcx_24 = *(rax_34 + rbx_7 + 4)
            
            if (rcx_24 != 0xf)
                uint64_t r12_3 = rdx_9 * 6
                *(*r15 + (r12_3 << 3) + 0x20) = rcx_24
                *(*r15 + rdx_9 * 0x30 + 0x24) = *(var_a0 + rbx_7 + 8)
                void* rax_38 = sub_140bdc2b0(r14, *(*(*r15 + (r12_3 << 3)) + 0x50), 1)
                
                if (rax_38 != 0)
                    *(*r15 + (r12_3 << 3) + 0x28) = zx.d(*(rax_38 + 0xb4))
                
                int64_t rdx_14 = *r15
                int32_t rcx_28 = *(rdx_14 + (r12_3 << 3) + 0x2c)
                
                if (((rcx_28 u>> 3).b & 1) != 0)
                    if (*(rsi + 0x58) == 0)
                        void* rax_44 = j_sub_140a82f30(0x28)
                        void* const r14_3 = rax_44
                        
                        if (rax_44 == 0)
                            r14_3 = nullptr
                        else
                            __builtin_memset(rax_44, 0, 0x22)
                            
                            if (*(rax_44 + 0x1c) != var_a8 + 1)
                                sub_1405947f0(rax_44 + 0x10, var_a8 + 1)
                            
                            if (var_a8 + 1 s> 0)
                                uint64_t i_2 = zx.q(var_a8 + 1)
                                uint64_t i_1
                                
                                do
                                    int64_t rdi_5 = sx.q(*(r14_3 + 0x18))
                                    int32_t rax_45 = (rdi_5 + 1).d
                                    *(r14_3 + 0x18) = rax_45
                                    
                                    if (rax_45 s> *(r14_3 + 0x1c))
                                        sub_140594770(r14_3 + 0x10)
                                    
                                    int16_t* rdx_17 = *(r14_3 + 0x10) + (rdi_5 << 1)
                                    
                                    if (rdx_17 != 0)
                                        *rdx_17 = 0xffff
                                    
                                    i_1 = i_2
                                    i_2 -= 1
                                while (i_1 != 1)
                                r15 = var_78
                                rsi = arg1
                            
                            rdi_2 = rsi + 0x38
                        
                        int64_t* rbx_8 = *(rsi + 0x58)
                        
                        if (rbx_8 != r14_3)
                            *(rsi + 0x58) = r14_3
                            
                            if (rbx_8 != 0)
                                int64_t rcx_33 = rbx_8[2]
                                
                                if (rcx_33 != 0)
                                    sub_140a74f90(rcx_33)
                                
                                int64_t rcx_34 = *rbx_8
                                
                                if (rcx_34 != 0)
                                    sub_140a74f90(rcx_34)
                                
                                j_sub_140a74f90(rbx_8)
                    
                    int64_t rcx_36 = *r15
                    char r13 = 0
                    uint32_t r14_4
                    
                    if (((*(rcx_36 + (r12_3 << 3) + 0x2c) u>> 7).b & 1) != 0)
                        r14_4 = zx.d(*(rcx_36 + (r12_3 << 3) + 0x1c))
                    
                    int128_t var_8c
                    int16_t r12_4
                    uint64_t r14_6
                    int64_t zmm1_1
                    
                    if (((*(rcx_36 + (r12_3 << 3) + 0x2c) u>> 7).b & 1) == 0
                        || r14_4 u>= zx.d(*(rcx_36 + (r12_3 << 3) + 0x1e)))
                    label_1422c96da:
                        r14_6 = rdx_9
                        r12_4 = var_c4_1
                    else
                        while (true)
                            int64_t* rbx_11 = (sx.q(r14_4) << 5) + *rdi_2
                            
                            if (*(rbx_11 + 0x1c) == 0)
                                void* rdi_6 = *(*rbx_11 + 0x78)
                                
                                if (rdi_6 != 0 && ((*(*(rdi_6 + 8) + 0x10) u>> 0x14).b & 1) != 0)
                                    void* rsi_4 = *(rdi_6 + 0x78)
                                    void* rax_51 = sub_14254fe50()
                                    
                                    if (rax_51 != 0)
                                        int64_t rax_52 = sx.q(*(rax_51 + 0x38))
                                        
                                        if (rax_52.d s<= *(rsi_4 + 0x38)
                                                && *(*(rsi_4 + 0x30) + (rax_52 << 3))
                                                == rax_51 + 0x30)
                                            int32_t* rbx_13 = 0x14 + *rax_33
                                            
                                            if (data_143f543c8 s> *rbx_13)
                                                _Init_thread_header(&data_143f543c8)
                                                
                                                if (data_143f543c8 == 0xffffffff)
                                                    sub_140b58260(&data_143f543c0, u"DeltaFlags", 1)
                                                    _Init_thread_footer(&data_143f543c8)
                                            
                                            if (data_143f543d8 s> *rbx_13)
                                                _Init_thread_header(&data_143f543d8)
                                                
                                                if (data_143f543d8 == 0xffffffff)
                                                    void var_60
                                                    data_143f543d0 = *sub_140b58260(&var_60, 
                                                        ArrayReplicationKey", 1)
                                                    _Init_thread_footer(&data_143f543d8)
                                            
                                            if (data_143f543e8 s> *rbx_13)
                                                _Init_thread_header(&data_143f543e8)
                                                
                                                if (data_143f543e8 == 0xffffffff)
                                                    void var_58
                                                    data_143f543e0 =
                                                        *sub_140b58260(&var_58, ReplicationID", 1)
                                                    _Init_thread_footer(&data_143f543e8)
                                            
                                            void* rax_67 = sub_140cbd150(rdi_6)
                                            int32_t rsi_5 =
                                                *(sub_140cdb8f0(rsi_4, data_143f543e0) + 0x4c)
                                            int32_t rbx_14 =
                                                *(sub_140cdb8f0(rax_67, data_143f543d0) + 0x4c)
                                            void* rax_70 = sub_140cdb8f0(rax_67, data_143f543c0)
                                            r12_4 = var_c4_1
                                            var_8c.d = r14_4
                                            int64_t* rdi_9 = *(arg1 + 0x58)
                                            r14_6 = rdx_9
                                            var_8c:8.d = *(rax_70 + 0x4c)
                                            var_8c:0xc.d = rbx_14
                                            uint32_t rcx_52 = zx.d(rdi_9[4].w)
                                            var_8c:4.d = rcx_52
                                            rcx_52.w += 1
                                            rdi_9[4].w = rcx_52.w
                                            int32_t var_7c_1 = rsi_5
                                            *(rdi_9[2] + (r14_6 << 1)) = rdi_9[1].w
                                            int64_t rbx_15 = sx.q(rdi_9[1].d)
                                            int32_t rax_73 = (rbx_15 + 1).d
                                            rdi_9[1].d = rax_73
                                            
                                            if (rax_73 s> *(rdi_9 + 0xc))
                                                sub_1405a4df0(rdi_9)
                                            
                                            int64_t rax_74 = *rdi_9
                                            int64_t rcx_55 = rbx_15 * 3
                                            r13 = 1
                                            rsi = arg1
                                            zmm1_1 = var_8c:0xc.q
                                            *(rax_74 + (rcx_55 << 3)) = r12_4.o
                                            *(rax_74 + (rcx_55 << 3) + 0x10) = zmm1_1
                                            break
                                
                                rdi_2 = var_70
                                r14_4 = zx.d(rbx_11[1].w) - 1
                            
                            r14_4 += 1
                            
                            if (r14_4 s>= zx.d(*(*r15 + (r12_3 << 3) + 0x1e)))
                                rsi = arg1
                                goto label_1422c96da
                    
                    if (r13 == 0)
                        int64_t* rbx_12 = *(rsi + 0x58)
                        __builtin_memset(&var_8c, 0xff, 0x14)
                        *(rbx_12[2] + (r14_6 << 1)) = rbx_12[1].w
                        int64_t rdi_7 = sx.q(rbx_12[1].d)
                        int32_t rax_56 = (rdi_7 + 1).d
                        rbx_12[1].d = rax_56
                        
                        if (rax_56 s> *(rbx_12 + 0xc))
                            sub_1405a4df0(rbx_12)
                        
                        int64_t rax_57 = *rbx_12
                        int64_t rcx_43 = rdi_7 * 3
                        zmm1_1 = var_8c:0xc.q
                        *(rax_57 + (rcx_43 << 3)) = r12_4.o
                        *(rax_57 + (rcx_43 << 3) + 0x10) = zmm1_1
                    
                    rbx_7 = var_b0_1
                    rdi_2 = rsi + 0x38
                    r14 = arg2
                else
                    *(rdx_14 + (r12_3 << 3) + 0x2c) = rcx_28 | 1
                    
                    if (*(var_a0 + rbx_7 + 4) == 0)
                        int64_t rax_43 = *r15
                        *(rax_43 + (r12_3 << 3) + 0x2c) &= 0xfffffffd
        
        rbx_7 += 0x10
        rax_59 = var_c0_2 + 1
        var_b0_1 = rbx_7
        var_c0_2 = rax_59
    while (rax_59 s< var_98)

if (var_c8 != 0)
    void* rax_60 = *r15
    
    if (*(rax_60 + 0xe0) != 0xf)
        *(rax_60 + 0xec) |= 2
        *(*r15 + 0xe0) = 0

if (arg3 == 0 || (arg4 & 1) != 0)
    sub_1422ba3b0(rsi, 0, *(rsi + 0x40) - 1, rsi + 0x48)

uint64_t result = sub_1422b1270(r14, r15, rdi_2, rsi + 0x24)
void* rcx_46 = var_a0
*(rsi + 0x60) = r14

if (rcx_46 == 0)
    return result

return sub_140a74f90(rcx_46)
