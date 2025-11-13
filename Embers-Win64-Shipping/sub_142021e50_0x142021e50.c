// 函数: sub_142021e50
// 地址: 0x142021e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg2
void* rdx = arg1[6]
void* result = nullptr
void* const rax_1

if (rdx != 0)
    rax_1 = *(rdx + 0x210)

uint64_t i_3

if (rdx == 0 || rax_1 == 0)
    i_3 = 1
else
    if (rdx == 0)
        rax_1 = nullptr
    
    i_3 = zx.q(*(rax_1 + 0x68))

int64_t* r9 = arg1[7]
int64_t* rcx = r9
void* rdx_1 = &r9[sx.q(arg1[8].d)]
wchar16* rdx_2

if (r9 != rdx_1)
    do
        void* rax_3 = *rcx
        
        if (rax_3 != 0 && *(rax_3 + 0xb8) == i)
            i_3 = zx.q(i)
            rdx_2 = u"A local player already exists for controller ID %d,"
            goto label_1420220ff
        
        rcx = &rcx[1]
    while (rcx != rdx_1)

int64_t* var_38
int32_t i_4

if (arg1[8].d s>= i_3.d)
    rdx_2 = u"Maximum number of players (%d) already created.  Unable to create more."
label_1420220ff:
    sub_140a2e390(&var_38, rdx_2, i_3)
    
    if (arg3 == &var_38)
        int64_t* rcx_15 = var_38
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
    else
        int64_t rcx_17 = *arg3
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        *arg3 = var_38
        arg3[1].d = i_4
        int32_t var_2c
        *(arg3 + 0xc) = var_2c
else
    if (i s< 0)
        i = 0
        
        if (i_3.d s> 0)
            do
                int64_t* rax_4 = r9
                
                if (r9 == rdx_1)
                    break
                
                while (true)
                    void* rcx_1 = *rax_4
                    
                    if (rcx_1 != 0 && *(rcx_1 + 0xb8) == i)
                        break
                    
                    rax_4 = &rax_4[1]
                    
                    if (rax_4 == rdx_1)
                        goto label_142021f31
                
                i += 1
            while (i s< i_3.d)
    
label_142021f31:
    void* rbx_1 = arg1[4]
    int64_t* rsi
    
    if (*(rbx_1 + 0x138) == 0)
        rsi = nullptr
    else
        void* rax_5 = sub_142531230()
        
        if (rax_5 == 0)
            rsi = nullptr
        else
            rsi = *(rbx_1 + 0x138)
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s> rsi[7].d || *(rsi[6] + (rax_6 << 3)) != rax_5 + 0x30)
                rsi = nullptr
    
    void* r15_1 = arg1[4]
    
    if ((1 & sub_140b5b8a0(0, 0)) != 0)
        sub_140d19010(r15_1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* result_1 = sub_140d2dfc0(rsi, r15_1, 0, 0, 0, 0, 0, 0, 0)
    int64_t r9_1 = *arg1
    result = result_1
    int32_t rax_9 = (*(r9_1 + 0x2d0))(arg1, result_1, zx.q(i), r9_1)
    void* rbx_2 = arg1[6]
    void* const rbx_3
    
    if (rbx_2 == 0)
        rbx_3 = nullptr
    else
        rbx_3 = *(rbx_2 + 0x278)
    
    if (arg4 != 0 && rax_9 != 0xffffffff && rbx_3 != 0)
        if (sub_14243ac50(rbx_3) == 3)
            if (sub_14243ae40(rbx_3) == 0)
                int64_t rax_16 = *result
                var_38 = nullptr
                i_4.q = 0
                (*(rax_16 + 0x298))(result, &var_38)
                int32_t i_2 = i_4
                int64_t* rbx_4 = var_38
                
                if (i_2 != 0)
                    int32_t i_1
                    
                    do
                        int64_t rcx_14 = *rbx_4
                        
                        if (rcx_14 != 0)
                            sub_140a74f90(rcx_14)
                        
                        rbx_4 = &rbx_4[2]
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                    rbx_4 = var_38
                
                if (rbx_4 != 0)
                    sub_140a74f90(rbx_4)
            else if (sub_141fc9c40(*(rbx_3 + 0xf0), result, rbx_3) == 0)
                (*(*arg1 + 0x2d8))(arg1, result)
                result = nullptr
        else
            int64_t rax_11 = *result
            var_38 = nullptr
            i_4.q = 0
            char rax_12 = (*(rax_11 + 0x290))(result, &var_38, arg3, rbx_3)
            int64_t* rcx_9 = var_38
            rbx_3.b = rax_12 == 0
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            if (rbx_3.b != 0)
                (*(*arg1 + 0x2d8))(arg1, result)
                result = nullptr
int16_t* const rcx_18

if (arg3[1].d == 0)
    rcx_18 = &data_142d40450
else
    rcx_18 = *arg3

sub_140a54510(rcx_18, &data_142d40450)
return result
