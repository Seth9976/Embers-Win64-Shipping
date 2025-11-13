// 函数: sub_14085d430
// 地址: 0x14085d430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xce8) == 0)
    return &__return_addr

sub_140b33630("Niagara")
sub_140d3c6e0(arg1 + 0x20)
char arg_8
sub_140744650(&arg_8, arg1)
int64_t rdx_2
rdx_2.b = 1
int512_t zmm1_1
int128_t zmm6_1
zmm1_1, zmm6_1 = sub_140862460(arg1)
*(arg1 + 0xd68) |= 4

if (*(arg1 + 0xe2c) != 0)
    if (zmm6_1.d f>= 0f)
        int128_t zmm0_1 = *(arg1 + 0xe28)
        
        if (not(zmm6_1.d f< zmm0_1.d))
            zmm6_1 = zmm0_1
    else
        zmm6_1 = zx.o(0)

zmm1_1.o = zmm6_1
sub_14085c610(arg1)
int32_t rax = *(arg1 + 0xce8)

if (rax s> *(arg1 + 0xccc))
    sub_1405c5570(arg1 + 0xcc0, rax)
    rax = *(arg1 + 0xce8)

void** r12_1 = nullptr
int32_t i = 0

if (rax s> 0)
    do
        void* rdi_1 = *(r12_1 + *(arg1 + 0xce0))
        
        if (((*(rdi_1 + 0x6b8) u>> 4).b & 1) == 0)
            zmm1_1.o = zmm6_1
            zmm1_1, zmm6_1 = sub_14085f9d0(rdi_1)
            
            if (*(rdi_1 + 0x10) != 0xffffffff)
                if ((*(arg1 + 0xd68) & 2) == 0)
                    sub_140856230(arg1, rdi_1)
                
                int32_t rax_7 = *(arg1 + 0xce8)
                int32_t r8_3 = rax_7 - i - 1
                
                if (r8_3 s>= 1)
                    r8_3 = 1
                
                if (r8_3 != 0)
                    int64_t rcx_7 = *(arg1 + 0xce0)
                    memcpy(rcx_7 + (sx.q(i) << 3), rcx_7 + (sx.q(rax_7 - r8_3) << 3), r8_3 << 3)
                    rax_7 = *(arg1 + 0xce8)
                
                *(arg1 + 0xce8) = rax_7 - 1
                sub_1405c53d0(arg1 + 0xce0)
                
                if (i s>= 0 && i s< *(arg1 + 0xce8))
                    *(*(r12_1 + *(arg1 + 0xce0)) + 0x10) = i
                
                int64_t rbp_1 = sx.q(*(arg1 + 0xcc8))
                int32_t rax_10 = (rbp_1 + 1).d
                *(arg1 + 0xcc8) = rax_10
                
                if (rax_10 s> *(arg1 + 0xccc))
                    sub_1405a4d70(arg1 + 0xcc0)
                
                *(*(arg1 + 0xcc0) + (rbp_1 << 3)) = rdi_1
                *(rdi_1 + 0x10) = rbp_1.d
        else
            i += 1
            r12_1 = &r12_1[1]
    while (i s< *(arg1 + 0xce8))

if (*(arg1 + 0xcc8) s> 0)
    TEB* gsbase
    
    if (data_143ce4598
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce4598)
        
        if (data_143ce4598 == 0xffffffff)
            int64_t* rcx_25 = data_143db18d0
            
            if (rcx_25 == 0)
                sub_140a53c40()
                rcx_25 = data_143db18d0
            
            int64_t r8_6
            r8_6.b = 1
            data_143ce4590 = (*(*rcx_25 + 0xb0))(rcx_25, u"sg.EffectsQuality", r8_6)
            _Init_thread_footer(&data_143ce4598)
    
    int64_t* rcx_15 = data_143ce4590
    int32_t rdi_2 = *(arg1 + 0xcc8)
    int32_t rax_14 = (*(*rcx_15 + 0x90))(rcx_15)
    void* var_98 = arg1
    void* var_80_1 = arg1 + 0x110
    int32_t var_78_1 = zmm6_1.d
    int64_t var_90_1 = sub_140d3c6e0(arg1 + 0x20)
    void* var_88_1 = arg1 + 0xcc0
    int32_t var_74_1 = rdi_2
    int32_t var_70_1 = rax_14
    int64_t* var_68_1 = nullptr
    int64_t var_60_1 = 0
    
    if (data_14396fee4 != 0)
        sub_140b011d0()
    
    char var_58_1 = 0
    
    if (data_14396fee8 == 0)
        char var_57_2 = 0
    else if (sub_140b011d0() == 0 || var_68_1 == 0)
        var_57_2 = 0
    else
        char var_57_1 = 1
        
        if (((*(arg1 + 0xd68) u>> 3).b & 1) != 0)
            var_57_2 = 0
    
    sub_14085f680(arg1, &var_98)
    sub_1407e96d0(arg1 + 0x110, arg1 + 0x40, 0, 0xffffffff, 0)
    sub_140808700(arg1 + 0x110)
    int32_t rdx_10 = *(arg1 + 0xcb8) + *(arg1 + 0xcc8)
    
    if (rdx_10 s> *(arg1 + 0xcbc))
        sub_1405c5570(arg1 + 0xcb0, rdx_10)
    
    void** r15_2 = *(arg1 + 0xcc0)
    int64_t rbp_3 = 0
    uint64_t r12_3 = sx.q(*(arg1 + 0xcc8)) << 3 u>> 3
    
    if (r15_2 u> &r15_2[sx.q(*(arg1 + 0xcc8))])
        r12_3 = 0
    
    if (r12_3 != 0)
        do
            int64_t rdi_3 = sx.q(*(arg1 + 0xcb8))
            void* r13_1 = *r15_2
            int32_t rax_21 = (rdi_3 + 1).d
            *(arg1 + 0xcb8) = rax_21
            
            if (rax_21 s> *(arg1 + 0xcbc))
                sub_1405a4d70(arg1 + 0xcb0)
            
            r15_2 = &r15_2[1]
            rbp_3 += 1
            *(*(arg1 + 0xcb0) + (rdi_3 << 3)) = r13_1
            *(r13_1 + 0x10) = rdi_3.d
        while (rbp_3 != r12_3)
    
    *(arg1 + 0xcc8) = 0
    
    if (*(arg1 + 0xccc) s<= 0xffffffff)
        sub_1405c5570(arg1 + 0xcc0, 0)
    
    if (var_68_1 != 0)
        var_68_1[9].d -= 1
        
        if (var_68_1[9].d == 1)
            sub_140a2f6e0(var_68_1)

*(arg1 + 0xd68) &= 0xfffffffb
sub_140746840(&arg_8)
return sub_140b37f60("Niagara")
