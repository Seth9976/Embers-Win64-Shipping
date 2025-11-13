// 函数: sub_14061f850
// 地址: 0x14061f850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d68458

if (arg1[2].b != 0)
    int64_t* r15_1 = arg1[1]
    EnterCriticalSection(&r15_1[0xb])
    midiInReset(*r15_1)
    midiInStop(*r15_1)
    int64_t rsi_1 = 0
    void* rdi_1 = &r15_1[7]
    
    while (true)
        uint32_t rax_1 = midiInUnprepareHeader(*r15_1, *rdi_1, 0x70)
        j_sub_140a74f90(**rdi_1)
        j_sub_140a74f90(*rdi_1)
        
        if (rax_1 != 0)
            midiInClose(*r15_1)
            *r15_1 = 0
            sub_14058ad40(&arg1[3], 
                "MidiInWinMM::openPort: error closing Windows MM MIDI input port (midiInUnprepareHeader).", 
                0x58)
            void var_48
            sub_1406209b0(arg1, 8, sub_140592d30(&var_48, &arg1[3]))
            break
        
        rsi_1 += 1
        rdi_1 += 8
        
        if (rsi_1 s>= 4)
            midiInClose(*r15_1)
            *r15_1 = 0
            arg1[2].b = 0
            LeaveCriticalSection(&r15_1[0xb])
            break

void* rbx_2 = arg1[1]
DeleteCriticalSection(rbx_2 + 0x58)

if (rbx_2 != 0)
    void* rcx_14 = *(rbx_2 + 0x18)
    
    if (rcx_14 != 0)
        if (*(rbx_2 + 0x28) - rcx_14 u>= 0x1000)
            void* r8_2 = *(rcx_14 - 8)
            
            if (rcx_14 - r8_2 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            rcx_14 = r8_2
        
        j_sub_140a74f90(rcx_14)
        __builtin_memset(rbx_2 + 0x18, 0, 0x18)
    
    j_sub_140a74f90(rbx_2)

sub_14061f4c0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
