// 函数: sub_14268e420
// 地址: 0x14268e420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1a00)
void var_1a38
int64_t rax_1 = __security_cookie ^ &var_1a38
int64_t* rcx = *(arg2 + 0xe8)
char r14 = arg3
void* r15 = arg2
void* rax_3 = (*(*rcx + 0x150))(rcx)
void* i_1 = nullptr

if (rax_3 != 0)
    void* rbx_1 = *(rax_3 + 0x120)
    
    if (rbx_1 != 0)
        void* rax_4 = sub_14269bba0()
        void* rdx = *(rbx_1 + 0x10)
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
            i_1 = *(rbx_1 + 0x298)

if (*(arg1 + 0x33c) s< 0)
    sub_14084ee30(arg1 + 0x330, 0)
else
    int32_t i_2 = *(arg1 + 0x338)
    
    if (i_2 != 0)
        int64_t* r14_2 = *(arg1 + 0x330) + 8
        int32_t i
        
        do
            int64_t* rbx_2 = *r14_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t rax_9 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_9 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            r14_2 = &r14_2[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    r14 = arg3
    r15 = arg2
    *(arg1 + 0x338) = 0

int64_t* rbx_3 = *(i_1 + 0x438)
int64_t var_1a08 = 0
int64_t* var_1a00 = rbx_3

if (rbx_3 != 0)
    int32_t rax_11 = 0
    bool z_1
    
    if (0 == rbx_3[1].d)
        rbx_3[1].d = 0
        z_1 = true
    else
        rax_11 = rbx_3[1].d
        z_1 = false
    
    if (z_1)
    label_14268e583:
        rbx_3 = nullptr
        var_1a00 = nullptr
    else
        while (true)
            bool z_2
            
            if (rax_11 == rbx_3[1].d)
                rbx_3[1].d = rax_11 + 1
                z_2 = true
            else
                rbx_3[1].d
                z_2 = false
            
            if (z_2)
                rbx_3 = var_1a00
                
                if (rbx_3 != 0)
                    var_1a08 = *(i_1 + 0x430)
                
                break
            
            rax_11 = 0
            bool z_3
            
            if (0 == rbx_3[1].d)
                rbx_3[1].d = 0
                z_3 = true
            else
                rax_11 = rbx_3[1].d
                z_3 = false
            
            if (z_3)
                goto label_14268e583

int128_t var_19e8 = var_1a08.o

if (rbx_3 != 0)
    rbx_3[1].d += 1
    rbx_3 = var_1a00

if (arg1 + 0x340 != &var_19e8)
    *(arg1 + 0x340) = var_1a08
    var_19e8.q = 0
    sub_1405aeff0(arg1 + 0x348, &var_19e8:8)

void* rcx_8 = var_19e8:8.q

if (rcx_8 != 0)
    int32_t rax_15 = *(rcx_8 + 8)
    *(rcx_8 + 8) -= 1
    
    if (rax_15 == 1)
        int64_t* rbx_4 = var_19e8:8.q
        (**rbx_4)(rbx_4)
        int32_t rax_17 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rax_17 == 1)
            int64_t* rcx_10 = var_19e8:8.q
            (*(*rcx_10 + 8))(rcx_10, 1)
    
    rbx_3 = var_1a00

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**var_1a00)(var_1a00)
        int32_t rsi_1 = *(var_1a00 + 0xc)
        *(var_1a00 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_1a00 + 8))(var_1a00, zx.q(rsi_1))

*(arg1 + 0x14) &= 0xfffffffb
*(arg1 + 0x14) |= zx.d(r14) << 2
float zmm3[0x4] = *(r15 + 0xa0)
int128_t zmm6 = *(r15 + 0xa8)
float zmm1[0x4] = *(arg1 + 0x74)
float zmm7[0x4] = *(arg1 + 0x6c)
zmm1[0] = zmm1[0] f- zmm6.d
zmm6.d = zmm6.d f+ *(arg1 + 0x80)
int64_t zmm4 = *(r15 + 0xa4)
zmm7[0] = zmm7[0] - zmm3[0]
zmm3[0] = zmm3[0] f+ *(arg1 + 0x78)
int64_t zmm5
zmm5.d = (*(arg1 + 0x70)).d f- zmm4.d
int32_t var_19cc = 0
zmm4.d = zmm4.d f+ *(arg1 + 0x7c)
zmm6.d = zmm6.d f- zmm1[0]
int32_t var_19bc = 0
zmm3[0] = zmm3[0] - zmm7[0]
int32_t var_84 = 0x63
zmm4.d = zmm4.d f- zmm5.d
zmm6.d = zmm6.d f* 0.5f
zmm3[0] = zmm3[0] * 0.5f
zmm4.d = zmm4.d f* 0.5f
int32_t var_19f0 = zmm6.d
zmm6.d = zmm6.d f+ zmm1[0]
zmm7[0] = zmm7[0] + zmm3[0]
int32_t var_19c0 = var_19f0
zmm5.d = zmm5.d f+ zmm4.d
float zmm2[0x4] = _mm_unpacklo_ps(zmm3, zmm4)
int32_t var_19d0 = zmm6.d
int128_t zmm0
zmm0.q = (_mm_unpacklo_ps(zmm7, zmm5)).q
float var_19c8[0x4]
var_19c8[0].q = zmm2.q
int128_t var_19d8_1 = zmm0
int128_t var_19b8 = zmm0
float var_19c8_1[0x4] = var_19c8
float var_19a8[0x4] = var_19c8
int128_t var_1988 = *(i_1 + 0x3f0)
float var_1978[0x4] = *(i_1 + 0x400)
int128_t var_1968 = *(i_1 + 0x410)
int64_t var_98 = 0
int32_t var_88 = 0
int32_t var_70 = 0
sub_1426625e0(&var_19b8)
void** result = sub_142648f90(&var_19b8)

while (i_1 != -0x10)
    void* rbx_6 = i_1 + 0x10
    void* rax_27 = *(rbx_6 + 0x380)
    
    if (rax_27 != 0)
        rbx_6 = rax_27
    
    void* rbx_7 = rbx_6 + sx.q(var_70) * 0x38
    int64_t* rax_30 = *(rbx_7 + 0x20) + 0x60
    int64_t* rcx_15
    
    if (rax_30[1].d == 0)
        rax_30.b = 0
    else
        rcx_15 = *rax_30
        
        if (rcx_15 == 0)
            rax_30.b = 0
        else
            rax_30, rcx_15 = (*(*rcx_15 + 0x28))(rcx_15)
            
            if (rax_30.b == 0)
                rax_30.b = 0
            else
                rax_30.b = 1
    
    char rax_34
    
    if (rax_30.b != 0)
        void* rax_32 = *(rbx_7 + 0x20)
        int64_t* rcx_16
        
        if (*(rax_32 + 0x68) == 0)
            rcx_16 = nullptr
        else
            rcx_16 = *(rax_32 + 0x60)
        
        rax_34, rcx_15 = (*(*rcx_16 + 0x48))(rcx_16, arg1 + 0x350)
    
    if (rax_30.b == 0 || rax_34 != 0)
        void* rax_35
        
        if (r14 != 0)
            rax_35 = *(rbx_7 + 0x20)
            
            if (*(rax_35 + 0x28) != 0 || *(rax_35 + 0x18) != 0)
                rcx_15.b = 1
            else
                rcx_15.b = 0
        
        if (r14 != 0 && (rcx_15.b != 0 || (*(rax_35 + 0xc8) & 1) != 0))
            goto label_14268e898
        
        void* rcx_17 = *(rbx_7 + 0x20)
        
        if (((*(rcx_17 + 0xc8) u>> 1).b & 1) != 0 || (*(rcx_17 + 0x70) & 1) != 0)
        label_14268e898:
            int64_t rsi_2 = sx.q(*(arg1 + 0x338))
            int32_t rax_38 = (rsi_2 + 1).d
            *(arg1 + 0x338) = rax_38
            
            if (rax_38 s> *(arg1 + 0x33c))
                sub_1405a4f90(arg1 + 0x330)
            
            int64_t* rcx_21 = (rsi_2 << 4) + *(arg1 + 0x330)
            *rcx_21 = *(rbx_7 + 0x20)
            void* rax_40 = *(rbx_7 + 0x28)
            rcx_21[1] = rax_40
            
            if (rax_40 != 0)
                *(rax_40 + 8) += 1
        else
            uint8_t rax_37
            
            if (*(rcx_17 + 0x90) != 0 || *(rcx_17 + 0xa0) != 0 || *(rcx_17 + 0xb0) != 0)
                rax_37 = 0
            else
                rax_37 = 1
            
            if (rax_37 == 0)
                goto label_14268e898
    
    var_70 += 1
    result = sub_142648f90(&var_19b8)

if (var_98 != 0)
    result = sub_140a74f90(var_98)

__security_check_cookie(rax_1 ^ &var_1a38)
return result
